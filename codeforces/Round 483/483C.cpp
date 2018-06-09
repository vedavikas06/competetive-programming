//cf483C.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define ll long long
#define L int
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

ll p,q,b;


int n;



// ll gcd(ll a, ll b)
// {
//     if(!b) return a;
//     return gcd(b, a % b);
// }



int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);


scanf("%d",&n);

for (int i = 0; i < n; ++i)
{
	

	scanf("%lld%lld%lld",&p,&q,&b);


    
    ll k = (gcd(p,q));
    
    q/=k;

    k = (gcd(q,b));

    q/=k;

   while(q >1 && k > 1){
  
   k = (gcd(q,b));

   q/=k;

   }

   if(q == 1){
   	cout << "Finite" << endl;
   }else{

   	cout << "Infinite" << endl;
   }

 

	
}

return 0;


}
