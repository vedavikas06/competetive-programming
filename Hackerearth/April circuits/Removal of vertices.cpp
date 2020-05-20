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
#define for0(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef pair<long long , long long> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
LL mod = 1000000007;

long long highestPowerof2(long long n) 
{ 
   long long p = (long long)log2(n); 
   return (long long)pow(2, p);  
} 


int main() {

	// int start_s = clock();

	// ios_base::sync_with_stdio(false);

	// cin.tie(NULL);

	int t,t1;

	cin >> t;
    t1=t;

	while(t--){

		long long n,k;
		cin >> n >> k;

		long long final_start = ((1+(2*k))%n)+1;

		// if n is the power of 2, then the position before the starting point is the last-remaining vertex

		// if n is not a power of 2, then first make it power of 2 first by removing some vertices such that the no of vertices is a power of 2, after which apply the previous situation

		// (final_start-1)%n) -> starting vertex after when k becomes 0 (0 to n-1 indexed)
		
		// (((final_start-1)%n)+ 2*(n-highestPowerof2(n))-1)%n -> last-remained vertex (0 to n-1 indexed)
		
		// add 1 to last-remained vertex to make it(1 to n indexed)
    long long fin = ((((final_start-1)%n)+2*(n-highestPowerof2(n))-1)%n)+1;
		cout << fin << endl;
        



    }

	// int stop_s = clock();

	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

	return 0;

}
