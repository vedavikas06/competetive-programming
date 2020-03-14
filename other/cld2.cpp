
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
typedef pair<long long , long long> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
LL mod = 1000000007;


int fact(LL n, LL m){
    LL res = 1;
    for (int i = n+1; i <= n+m ; ++i)
    {
        res *= i;
    }

    for(int i=1;i<=m;i++){
        res/=i;
    }
    return res;
}


int main() {

	// int start_s = clock();

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	int n,m,k;
    cin >> n >> m >> k;

    string res = "";

    while(n!=0 || m!=0){
        int r;
        if(n==0){
            r=1;
        }else{
            r = fact(n-1,m);
        }
        if(k<=r && n>0){
            res+="H";
            n=n-1;
        }else{
            res+="V";
            k-=r;
            m=m-1;
        }


    }

    cout << res << endl;


	// int stop_s = clock();

	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

	return 0;


}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
