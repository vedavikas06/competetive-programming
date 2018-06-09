//cf 480A.cpp
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


string s;

cin >> s;


int cntW =0;

int cntP = 0;

for (int i = 0; i < s.length(); ++i)
{
	if(s[i] == '-'){
		cntW++;
	}else{
		cntP++;
	}
}


if(cntP == 0){
	cout << "YES" << endl;
}else{

	if(cntW%cntP==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}

return 0;


}
