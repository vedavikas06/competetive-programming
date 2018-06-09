//cf482B.cpp
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

vector<int> v;

int n;

cin >> n;

string s1,s2,s3;

cin >> s1;
cin >> s2;
cin >> s3;

map<char,int> m1,m2,m3;

for (int i = 0; i < s1.length(); ++i)
 {
 	m1[s1[i]]++;
 } 

 for (int i = 0; i < s2.length(); ++i)
 {
 	m2[s2[i]]++;
 } 

for (int i = 0; i < s3.length(); ++i)
 {
 	m3[s3[i]]++;
 } 





int x1 = max_element(m1.begin(), m1.end(),
    [](const pair<char, int>& p1, const pair<char, int>& p2) {
        return p1.second < p2.second; })->second;

int x2 = max_element(m2.begin(), m2.end(),
    [](const pair<char, int>& p1, const pair<char, int>& p2) {
        return p1.second < p2.second; })->second;

int x3 = max_element(m3.begin(), m3.end(),
    [](const pair<char, int>& p1, const pair<char, int>& p2) {
        return p1.second < p2.second; })->second;

int len1 = s1.length();

int len2 = s2.length();
int len3 = s3.length();

if(n==1 && x1 == len1){

len1--;

}

if(n==1 && x2 == len2){

len2--;

}

if(n==1 && x3 == len3){

len3--;

}


 x1 = min(len1,x1+n);

 x2 = min(len2,x2+n);

 x3 = min(len3,x3+n);

 //cout << x1 << " " << x2 << " " << x3 << endl;

 
 
  if(max(x1,max(x2,x3)) == x1 && max(x1,max(x2,x3)) != x2 && max(x1,max(x2,x3)) != x3) {

   cout << "Kuro" << endl;


  }else if(max(x1,max(x2,x3)) != x1 && max(x1,max(x2,x3)) == x2 && max(x1,max(x2,x3)) != x3){

  	cout << "Shiro" << endl;


  }else if(max(x1,max(x2,x3)) != x1 && max(x1,max(x2,x3)) != x2 && max(x1,max(x2,x3)) == x3){

   cout << "Katie" << endl;

  }else{

  	cout << "Draw" << endl;
  }


 




 





 

return 0;


}
