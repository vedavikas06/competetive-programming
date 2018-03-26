//cff 472A.cpp
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

int n;

cin >> n;

string s;

cin >> s;

int cnt =0;

int cntQ = 0;

for (int i = 0; i < n; ++i)
{
	if(s[i] == '?'){
		cntQ++;
	}
}
for (int i = 0; i < n-1; ++i)
{
	if(s[i] !='?' && s[i+1] != '?' && s[i] == s[i+1]){
  
    cnt++;

	}
}

//cout << cnt << " " << cntQ << endl;


if(cnt>0 || cntQ == 0){
	cout << "No" << endl;
}else{


int cnt1 = 0;

for (int i = 1; i < n-1 ; ++i)
{
	if(s[i-1] !='?' && s[i] == '?' && s[i+1]!='?'){
	set<char> s1;
    
    s1.insert(s[i-1]);

    s1.insert(s[i+1]);
  
    if(s1.size()==2){
    	cnt1++;
    }

  }

}

if(cnt1 == cntQ){
	cout << "No" << endl;
}else{
	cout << "Yes" << endl;
}

}




return 0;


}



