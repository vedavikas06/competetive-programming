//codechef--Using sqrt Decomposition
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
// #define all(x) x.begin(), x.end()
// #define clr(x) memset(x, 0, sizeof(x))
// #define sortall(x) sort(all(x))
// #define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
// typedef pair<int, int>	pii;
// typedef pair<ll, ll>	pl;
// typedef vector<int>		vi;
// typedef vector<ll>		vl;
// typedef vector<pii>		vpii;
// typedef vector<pl>		vpl;
// typedef vector<vi>		vvi;
// typedef vector<vl>		vvl;
const int N = 3e5;

/////////

int a[N];
const int rtn = 600;
int local[N], bkt[N];
int mat[rtn+1][rtn+1];
int dp[rtn+1][rtn+1], en[rtn+1];
unordered_map<int, int> cnt[rtn+1];



void compute1(int b){

cnt[b].clear();

dp[b][0] =mat[b][0];
int i;
Fo(i,1,en[b]+1){
	dp[b][i] = dp[b][i-1]^mat[b][i];
}


Fo(i,0,en[b]+1){
	cnt[b][dp[b][i]]++;
}


}



int main(){


    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i,n, _i = 0, q,j;

	int b = -1;
  
  cin >> n >> q;


  fo(i,n){

  	 cin >> a[i];

      if(i%rtn==0){

          if(b>=0){

	       compute1(b);
          
          }

        b++;

       _i=0;

       }


   bkt[i] = b;

  local[i] = _i;

  en[b] = _i;

  mat[bkt[i]][local[i]] = a[i];

  _i++;




  }

  compute1(b);

   
fo(i,q){


int q1,i,x;

cin >> q1 >> i >> x;

i--;

if(q1==1){


	mat[bkt[i]][local[i]] = x;

	compute1(bkt[i]);



}else{

int b = bkt[i];

//cout << b << endl;

j=0;

int pre = 0,sum=0,pst =0;

while(bkt[pst]<b){

int wanted = x^pre;

sum += cnt[j][wanted];

pre^=dp[j][en[j]];

pst+=rtn;

}

//cout << local[i] << endl;
int k;

Fo(k,0,local[i]+1){
pre^=mat[b][k];

if( pre== x){

sum++;


}



}





cout << sum << endl;




}











}






















}




































