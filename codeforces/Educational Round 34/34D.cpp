#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FORB(i,b,a) for(i=b;i>=a;i--)
#define mod 1000000007
#define PI 2*acos(0.0)
#define LL long long
#define gs getline(cin,s)
#define pii pair<int,int>
#define pli pair<long long int,int>
#define pll pair<long long int,long long int>
#define pb push_back
#define eb emplace_back
#define mem(a,b) memset(a,b,sizeof(a))
#define inf 1e9
#define INF 1e18
#define io ios_base::sync_with_stdio(0);
#define ff first
#define ss second


int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n;

cin >> n;

vector<ll> v;

long long a;

for (int i = 0; i < n; ++i)
{

    cin >> a;
 v.push_back(a);

}
long double sum = 0;
for (int i = 1; i < n; ++i)
{
    sum=sum+v[i]*i;
}
for (int i = 0; i < n; ++i)
{
    sum=sum-v[i]*(n-i-1);
}



map<ll,int> m;
for (int i = 0; i < n; ++i)
{
    
if(m[v[i]-1]>0){
    sum-=(m[v[i]-1]);

}

if(m[v[i]+1]>0){
    sum+=(m[v[i]+1]);

    
}


   m[v[i]]++;


}

cout << fixed << setprecision(0) << sum << endl;



return 0;

}
