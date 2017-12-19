#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 
int n;
 
cin >> n;
 
 
string s[n];
 
for (int i = 0; i < n; ++i)
{
	
 
cin >> s[i];
 
 
}
 
for (int i = 0; i < n; ++i)
{
	
 
int noA = 0,noB=0;
 
for (int i1 = 0; i1 < s[i].length(); ++i1)
{
	if(s[i][i1]=='A'){
		noA++;
 
	}
	if(s[i][i1]=='B'){
		noB++;
	}
}
 
int cnt1 =0,cnt2=0,p = 0;
 
char prev='*';
 
for(int i1 = 0; i1 < s[i].length(); ++i1)
{
 
 
if(s[i][i1]=='.'){
 
p++;
 
}
 
if(s[i][i1]=='A' && prev =='A' ){
 
cnt1+=p;
p=0;
 
 
}
 
if(s[i][i1]=='B' && prev =='B' ){
 
cnt2+=p;
p=0;
 
 
}
 
 
 
 
if((s[i][i1]=='A'||s[i][i1]=='B')){
 
prev = s[i][i1];
p=0;
 
 
}
 
	
}
 
 
 
cout << cnt1+noA << " " << cnt2+noB << endl;
 
 
 
}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
