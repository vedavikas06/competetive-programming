#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
int t;
 
cin >> t;
 
 
for (int i = 0; i < t; ++i)
{
 
 
int n,m;
 
cin >> n >> m;
 
char ch[n][m];
 
for (int i = 0; i < n; ++i)
{
  for (int j = 0; j < m; ++j)
  {
   
 
cin >> ch[i][j];
 
}
 
}
 
int l1=0,l2=0;
 
for (int i = 0; i < n; ++i)
{
  
if(i%2==0){
 
 
 for (int j = 0; j < m; ++j)
 {
   
if(j%2==0){
 
   if(ch[i][j]=='G'){
 
 l1+=3;
 
 }
 
}else{
 
if(ch[i][j]=='R'){
 
 l1+=5;
 
 }
 
}
 
 
 }
 
}else{
 
 for (int j = 0; j < m; ++j)
 {
   
if(j%2==0){
 
   if(ch[i][j]=='R'){
 
 l1+=5;
 
 }
 
}else{
 
if(ch[i][j]=='G'){
 
 l1+=3;
 
 }
 
}
 
 
 }
 
 
 
}
 
 
 
 
 
}
 
 
 
for (int i = 0; i < n; ++i)
{
  
if(i%2==0){
 
 
 for (int j = 0; j < m; ++j)
 {
   
if(j%2==0){
 
   if(ch[i][j]=='R'){
 
 l2+=5;
 
 }
 
}else{
 
if(ch[i][j]=='G'){
 
 l2+=3;
 
 }
 
}
 
 
 }
 
}else{
 
 for (int j = 0; j < m; ++j)
 {
   
if(j%2==0){
 
   if(ch[i][j]=='G'){
 
 l2+=3;
 
 }
 
}else{
 
if(ch[i][j]=='R'){
 
 l2+=5;
 
 }
 
}
 
 
 }
 
 
 
}
 
 
 
 
 
}
 
 
 
 
 
cout << min(l1,l2) << endl;
 
 
 
}
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
