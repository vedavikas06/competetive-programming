//cf481E.cpp
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




int main(){



ios_base::sync_with_stdio(false);

cin.tie(NULL);

int n,w;


cin >> n >> w;


int a[n];

for (int i = 0; i < n; ++i)
{
	cin >> a[i];
}

for (int i = 1; i < n; ++i)
{
	a[i] += a[i-1];
}

int max = *max_element(a,a+n);

int min = *min_element(a,a+n);

if(max>w || (min<0 && abs(min) > w)){
	cout << "0" << endl;
}else{

int re_min = 0,re_max = w;

if(min<0){

re_min = abs(min);

}

if(max >= 0){
re_max = w - max;
}

if(re_max < 0 || re_max < re_min ){
	cout << "0" << endl;
}else{

cout << abs(re_max - re_min) + 1 << endl;

}


}



return 0;


}
