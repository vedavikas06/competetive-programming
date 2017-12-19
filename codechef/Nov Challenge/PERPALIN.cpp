#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
 
cin >> t;
 
 
 
 
for (int i = 0; i < t; ++i)
{
 
   int n,p;
 
   cin >> n >> p;
 
   if(n ==p){
 
   if(n%2==1){
 
  if(n==1){
 
cout << "impossible" << endl;
  }else{
 
for (int i = 1; i <=n/2; ++i)
{
	cout << "ab";
}
 
cout << "a" << endl;
 
  }
 
 
 
   }else{
 
if(n==2){
	cout << "impossible" << endl;
}else{
 
if(n%4==0){
 
for (int i = 1; i <=n/4 ; ++i)
{
	cout << "abba";
}
cout << endl;
}else{
for (int i = 1; i <=n/4 ; ++i)
{
	cout << "aabb";
}
 
cout << "aa" << endl;
 
 
}
 
}
 
 
 
 
 
   }
 
 
 
   }else{
 
int q = n/p;
 
 n = p;
 
string s="";
 
 
	
 
if(n%2==1){
 
  if(n==1){
 
cout << "impossible" << endl;
 
 
  }else{
 
for (int i = 1; i <=n/2; ++i)
{
	//cout << "ab";
	s+="ab";
 
}
 
//cout << "a" << endl;
s+="a";
 
  }
 
 
 
   }else{
 
if(n==2){
	cout << "impossible" << endl;
	
}else{
 
if(n%4==0){
 
for (int i = 1; i <=n/4 ; ++i)
{
	//cout << "abba";
	s+="abba";
}
//cout << endl;
}else{
for (int i = 1; i <=n/4 ; ++i)
{
	//cout << "aabb";
	s+="aabb";
}
 
//cout << "aa" << endl;
s+="aa";
 
 
}
 
 
}
 
 
 
 
 
}
 
 
 
if(s!=""){
for (int i = 0; i < q; ++i)
{
	cout << s;
}
 
cout << endl;
 
 
   
}
 
 
 
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
	
}
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
