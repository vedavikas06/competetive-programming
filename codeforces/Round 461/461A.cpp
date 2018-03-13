//cff 461A.cpp
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

int x,y;

cin >> x >> y;


if(y==0 || (y==1 && x > 0)){
	cout << "No" << endl;
}else{


if((x-y+1)%2 == 0 && x-y+1>=0 ){

	cout << "Yes" << endl;
}else{
	cout << "No" << endl;
}


}

return 0;


}



