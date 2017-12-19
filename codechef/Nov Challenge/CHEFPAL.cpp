#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
int T;
 
cin >> T;
 
 
for (int i = 0; i < T; ++i)
{
	
int n,a;
 
cin >> n >> a;
 
if(a==2){
 
if(n==1){
	cout << "1 " << "a" << endl;
}else if(n==2){
	cout << "1 " <<  "ab" << endl;
}else if(n==3){
	cout << "2 " << "aab" << endl;
}else if(n==4){
	cout << "2 " << "aabb" << endl;
}
else if(n==5){
	cout << "3 " << "aabab" << endl;
}
else if(n==6){
	cout << "3 " << "aababb" << endl;
}
else if(n==7){
	cout << "3 " << "aaababb" << endl;
}
else if(n==8){
	cout << "3 " << "aaababbb" << endl;
}
else if(n==9){
	cout << "4 " << "aaaababbb" << endl;
}
else if(n==10){
	cout << "4 " << "aaaababbbb" << endl;
}else{
 
// int i1 = (n-3)/2,j1 = n-3-i1;
 
// cout << max(i1+1,j1) << " ";
 
// for (int i = 0; i < i1; ++i)
// {
// 	cout << "a";
// }
 
// cout << "aba";
 
// for (int i = 0; i < j1; ++i)
// {
// 	cout << "b";
// }
// cout << endl;
 
// }
int i1 = (n+1)/2,j1 = n-i1;
 
cout << max(i1-1,j1-1) << " ";
 
for (int i = 1; i <= i1-1; ++i)
{
	cout << "a";
}
 
cout << "ba";
 
for (int i = 0; i <= j1-1; ++i)
{
	cout << "b";
}
cout << endl;
 
}
 
 
}else{
 
 
int i = 1;
if(a!=1){
cout << "1 ";
}else{
	cout << n << " ";
}
 
while(i<=n){
int j =1;
while(j<=a&&i<=n){
char ch = 96+j;
 
cout << ch;
 
i++;
j++;
 
}
 
 
}
 
 
cout << endl;
 
}
 
 
 
 
 
 
 
}
 
 
 
 
}
 
