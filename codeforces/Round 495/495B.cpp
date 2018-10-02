#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define fir first
#define sec second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define L int
#define mx 100009
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;



int main() {

  // int start_s = clock();

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

 int n,m;

 cin >> n >> m;

 vii ar;

 for (int i = 0; i < m; ++i)
 {
 	int a,b;

 	cin >> a >> b;

 	ar.pb({a,b});
 }

 int arr[n+1];

 for (int i = 1; i <= n ; ++i)
 {
 	if(i%2==1){
 		arr[i] = 0;
 	}else{
 		arr[i] =1;
 	}
 }
LL tot =0;

for (int i = 0; i < ar.size(); ++i)
{
	int cnt1=0,cnt2=0;
   for (int j = ar[i].first; j <= ar[i].second ; ++j)
   	{
   		if(arr[j] == 0){
   			cnt1++;
   		}else{
   			cnt2++;
   		}

   	}	
   	tot+=(cnt1*cnt2);

 
}

// cout << tot << endl;

for (int i = 1; i <= n ; ++i)
{
	cout << arr[i];
}

cout << endl;



  


  // int stop_s = clock();

  // cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

  return 0;


}
