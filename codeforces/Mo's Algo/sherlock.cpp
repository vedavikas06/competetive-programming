//hackerearth
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;



int n,q,block;

int bit[100050];

int a[100050],b[100050];

int N = 100050;



vector< pair< pair<int,int>,int > > qu;



bool comp(pair< pair<int,int>,int > a,pair< pair<int,int>,int > b){

int a1 = a.first.first/block;

int a2 = b.first.first/block;

if(a1 == a2){

  return a.first.second < b.first.second;

}else{
  
  return a1 < a2;

}


}


int getSum(int index)
{
    int sum = 0; // Initialize result
 
    // Traverse ancestors of BITree[index]
    while (index > 0)
    {
        // Add current element of BITree to sum
        sum += bit[index];
 
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}


void updateBIT(int index, int val)
{
    // Traverse all ancestors and add 'val'
    while (index <= N)
    {
       // Add 'val' to current node of BI Tree
       bit[index] += val;
 
       // Update index to that of parent in update View
       index += index & (-index);
    }
}

unordered_map<int,int> mp;


int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cin >> n >> q;

block = 900;

for (int i = 1; i <= n ; ++i)
{
  cin >> a[i];
  b[i] = a[i];
}

sort(b+1,b+n+1);

int cnt = 0;

for (int i = 1; i <= n ; ++i)
{
 
if(!mp[b[i]]){
  
  mp[b[i]] = ++cnt;

}

//cout << mp[b[i]] << " " << b[i] <<  endl;

}

cnt++;


for (int i = 0; i < q; ++i)
{

  int a,b;
   
  cin >> a >> b; 
  // pair< pair<int,int>,int > = 
  qu.pb({{a,b},i});//make_pair(make_pair(a,b),i);
 // cout << qu[i].first.first << qu[i].first.second << qu[i].second << endl;

  
}


sort(qu.begin(),qu.end(),comp);


for (int i = 0; i < q; ++i)
{
   //cout << qu[i].first.first << qu[i].first.second << qu[i].second << endl;
 
}

int left_mo = 1,right_mo = 0;

long long sum = 0;

vector<long long> op(q); 

for (int i = 0; i < q; ++i)
{
  int left = qu[i].first.first;

  int right = qu[i].first.second;

  //cout << left << " " << right << endl;

  while(right_mo < right){
   
   right_mo++;
   
   updateBIT(mp[a[right_mo]],1);

   sum += getSum(cnt)-getSum(mp[a[right_mo]]);

  }

  while(right_mo > right){


   sum -= getSum(cnt)-getSum(mp[a[right_mo]]);
   
   updateBIT(mp[a[right_mo]],-1);

   right_mo--;

  }

  while(left_mo < left){

   sum -= getSum(mp[a[left_mo]]-1);

   updateBIT(mp[a[left_mo]],-1);
   
   left_mo++;
 }

 while(left_mo > left){
 
   left_mo--;

   sum += getSum(mp[a[left_mo]]-1);
   
    updateBIT(mp[a[left_mo]],1);

  }


  op[qu[i].second] = sum;

  //cout << "sum" << sum << endl;
  
}

for (int i = 0; i < q; ++i)
{
  
  cout << op[i] << endl;

}



return 0;


}
