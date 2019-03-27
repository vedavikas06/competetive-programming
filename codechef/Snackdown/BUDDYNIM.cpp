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

int main() {

	// int start_s = clock();

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	int t;
	cin >> t;
	for (int i1 = 0; i1 < t; ++i1)
	{
		
	
 	int n,m;

 	cin >> n >> m;

 	vi a(n),b(m);
 	long long sum1 =0,sum2 =0;

 	for (int i = 0; i < n; ++i)
 	{
 		cin >> a[i];
 		//sum1+=a[i];
 		
 	}

 	for (int i = 0; i < m; ++i)
 	{
 		cin >> b[i];
 		//sum2+=b[i];
 	}

 	priority_queue<int> q1,q2;

 	for (int i = 0; i < n; ++i)
 	{
 		q1.push(a[i]);
 	}


	for (int i = 0; i < m; ++i)
 	{
 		q2.push(b[i]);
 	}
 	bool tu = false;
 	while(!q1.empty() && !q2.empty()){



 		if(q2.top() == q1.top()){
 			q1.pop();
 			q2.pop();

 		}else{
 			cout << "Alice" << endl; 
 			tu = true;		
 			break;
 		}

 	}

 	if(!tu ){
 		cout << "Bob" << endl;
 	}


}
	// int stop_s = clock();

	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << endl;

	return 0;


}



