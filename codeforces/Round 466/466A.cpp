//cff 466A.cpp
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define sf scanf
#define pf printf
#define f first
#define s second
#define clr(x,y) memset(x,y,sizeof x)
#define LL long long
#define mx 100009
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;




int main(){

ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n,d;

cin >> n >> d;

int a[n];

for (int i = 0; i < n; ++i)
{
	cin >> a[i];

}


sort(a,a+n);

int minV = INT_MAX;

for(int i = 0; i < n ;i++){

int val = a[i],start = i;

while(start < n && a[start] <= val+d){

if( start+1 >= n || a[start+1] > val+d ){

	break;

}


start++;


}

//cout << " start" << start << endl;
minV = min(n - (start-i+1) ,minV);

//cout << minV << endl;

}


cout << minV << endl;


return 0;


}

