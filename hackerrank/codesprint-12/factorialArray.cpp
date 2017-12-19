#include <bits/stdc++.h>
#define MAX 100005
#define lli long long
#define M 1000000000
using namespace std;

vector < vector<int> > tree(3*MAX, vector <int>(41,0));
int lazy[3*MAX];
lli fact[42];
int A[MAX];
vector <int> dummy(41,0);
// fast input
template<typename T>
inline void fi(T *a)
{
 register char c=0;
 while (c<33) c=getchar_unlocked();
 *a=0;
 int tmp = 0;
 while (c>33)
 {
     if ( c == 45 ) tmp = 1;
     else *a=*a*10+c-'0';
     c=getchar_unlocked();
 }
 if ( tmp == 1 ) *a = 0-(*a);
}

void combine(vector <int> &v, vector <int> &v1, vector <int> &v2)
{
    for ( int i = 0; i < 41; i++ ) v[i] = v1[i] + v2[i];
}

void build(int where, int left, int right)
{
    if ( left > right ) return;
    if ( left == right ) {
        tree[where].resize(41,0);
        if ( A[left] >= 40 ) tree[where][40] = 1;
        else tree[where][A[left]] = 1;
        return;
    }
    int mid = (left+right)>>1;
    build((where<<1), left, mid);
    build((where<<1)+1, mid+1, right);
    combine(tree[where], tree[(where<<1)], tree[(where<<1)+1]);
}

void push_down(int where, int left, int right)
{
    if ( lazy[where] ) {
        vector <int> v(tree[where]);
        for ( int i = 0; i <= 40; i++ ) tree[where][i] = 0;
        for ( int i = 0; i <= 40; i++ ) tree[where][min(40,i+lazy[where])] += v[i];
        if ( left != right ) {
            lazy[(where<<1)] += lazy[where];
            lazy[(where<<1)+1] += lazy[where];
        }
        lazy[where] = 0;
    }
    return;
}

void range_update(int where, int left, int right ,int i, int j, int val)
{
    push_down(where, left, right);
    if ( left > right || left > j || right < i ) return;
    if ( left >= i && right <= j ) {
        lazy[where] += val;
        push_down(where, left, right);
        return;
    }
    int mid = (left+right)>>1;
    range_update((where<<1), left, mid, i, j, val);
    range_update((where<<1)+1, mid+1, right, i, j, val);
    combine(tree[where], tree[(where<<1)], tree[(where<<1)+1]);
}

vector <int> query(int where, int left, int right, int i, int j)
{
    push_down(where, left, right);
    if ( left > right || left > j || right < i ) return dummy;
    if ( left >= i && right <= j ) return tree[where];
    int mid = (left+right)>>1;
    vector <int> ans(41,0);
    vector <int> ans1 = query((where<<1), left, mid, i, j);
    vector <int> ans2 = query((where<<1)+1, mid+1, right, i, j);
    combine(ans, ans1, ans2);
    return ans;
}

void pre()
{
    fact[0] = 1;
    for ( lli i = 1; i <= 39; i++ ) fact[i] = (fact[i-1]*i)%M;
    return;    
}

int main()
{
    pre();
    int n,m,x,y,type;
    fi(&n), fi(&m);
    assert(n >= 1 && n <= 100000);
    assert(m >= 1 && m <= 100000);
    for ( int i = 0; i < n; i++ ) fi(&A[i]), assert(A[i] >= 1 && A[i] <= 1000000000);
    build(1,0,n-1);
    while ( m-- ) {
        fi(&type);
        assert(type >= 1 && type <= 3);
        if ( type == 2 ) {
            fi(&x), fi(&y);
            assert(x >= 1 && x <= n);
            assert(y >= 1 && y <= n);
            assert(x <= y);
            x--, y--;
            vector <int> ans = query(1,0,n-1,x,y);
            int fin = 0;
            for ( int i = 0; i < 40; i++ ) {
                lli val = ((lli)fact[i]*(lli)ans[i])%M;
                fin += val;
                if ( fin >= M ) fin -= M;
            }
            printf("%d\n", fin);
        }
        else if ( type == 3 ) {
            fi(&x), fi(&y);
            assert(x >= 1 && x <= n);
            assert(y >= 1 && y <= 1000000000);
            x--;
            vector <int> v = query(1,0,n-1,x,x);
            int mx = max_element(v.begin(),v.end()) - v.begin();
            range_update(1,0,n-1,x,x,-mx+y);
        }
        else {
            fi(&x), fi(&y);
            assert(x >= 1 && x <= n);
            assert(y >= 1 && y <= n);
            assert(x <= y);
            x--, y--;
            range_update(1,0,n-1,x,y,1);
        }     
    }
    return 0;
}
