//codeforces Testing1.cpp
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


int n,d;

cin >> n >> d;

string s,s1;

s+="0";

cin >> s1;

s+=s1;

int a = 1;

int start =1,cnt = 0;

if(s[1] != '1' || s[n]!='1'){
  cout << "-1" << endl;

  return 0;
}

while(a){

  bool chang = false;

if(start+d<=n){
for (int i = start+d; i >= start+1 ; i--)
{
  
if(s[i]=='1'){

  start = i;
  chang = true;
  break;

}


}

}else{

for (int i = n; i >= start+1 ; i--)
{
  
if(s[i]=='1'){

  start = i;
chang = true;
  break;

}


}



}

cnt++;

if(start==n){

cout << cnt << endl;

break;

}

if(!chang){
  cout << "-1" << endl;
  break;
}



}

return 0;


}
