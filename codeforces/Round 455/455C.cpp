//codeforces 455C.cpp
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

long long mod = 1000000007;




int main(){


ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n;

cin >> n;

char ch[n];

for (int i = 0; i < n ; ++i)
{
	cin >> ch[i];

}


long long dp[n][n];



dp[0][0] = 1;

long long sum[n];

sum[0] = 1;



for (int i = 1; i < n; ++i)
{
	dp[0][i] = 0;
	sum[i] = 0;
}


for (int j = 1; j < n; ++j)
{
	for (int k = 0; k < n; ++k)
	{
		
     dp[j][k] = 0;
			
	}


}

for (int i = 1; i <n ; ++i)
{
	
if(ch[i-1] == 'f'){

dp[i][0] = 0;

for (int j = n-1; j >= 1; j--)
{


	dp[i][j] = dp[i-1][j-1];

	if(j==n-1){

		sum[j] = dp[i][j];
	
	}else{
		sum[j] = (sum[j+1]+dp[i][j])%mod;
	}


}

sum[0] = (sum[1]+dp[i][0])%mod;


}else{



//  if(ch[i] == 'f' && dp[i][0] == 0){
	
// 	dp[i][0]+=1;


// }


for (int j = n-1; j >= 0; j--)
{
	// for (int k = n-1; k >= j ; k--)
	// {
	
 //     // if(ch[k] == 'f')

     dp[i][j] += sum[j];


	if(j==n-1){

		sum[j] = dp[i][j];
	
	}else{

		sum[j] = (sum[j+1]+dp[i][j])%mod;
	
	}
	


}






}



}

// for (int j = 0; j < n; ++j)
// {
// 	for (int k = 0; k < n; ++k)
// 	{
		
//      cout << dp[j][k] << " ";
			
// 	}

// 	cout << endl;


// }


long long sum1 = 0;

for (int i = 0; i < n; ++i)
{

	sum1+=dp[n-1][i];


}

	sum1=sum1%mod;

cout << sum1 << endl;




return 0;


}
