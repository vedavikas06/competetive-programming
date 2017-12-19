#include <bits/stdc++.h>
using namespace std;


int main(){


ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n,m;

cin >> n >> m;


string s;

cin >> s;

for (int i = 0; i < m; ++i)
{
	

int l,r;
char c1,c2;
cin >> l >> r >> c1 >> c2;
for (int i = l-1; i <= r-1 ; ++i)
{
	if(s[i]==c1){
	
		s[i]=c2;
	
	}

}



}


cout << s << endl;




}
























































