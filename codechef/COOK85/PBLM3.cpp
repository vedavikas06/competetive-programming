#include<bits/stdc++.h>
using namespace std;
 
 
//main function
int main(){
	
	 int n,q;;
	cin >> n >> q;
	int a[n+1][n+1];
	
 for(int i=1;i<=n;i++){
 	for(int j=1;j<=n;j++){
 		cin >> a[i][j];
	 }
 }
 
 int st[n+1];
 
 st[1]=0;
 for(int i=2;i<=n;i++){
 	
 	st[i]=-a[i][1];
 	bool wo = true;
 	for(int j=1;j<i;j++){
    if(a[i][j]!=abs(st[i]-st[j])){
    	wo = false;
		break;
	} 		
 		
	 }
	 if(wo==false){
	 	st[i]=-st[i];
	 }
	 
	 
 }
 
 for(int i=1;i<=n;i++){
 	cout << st[i] << " ";
 	
 }
 cout << endl;
 	int b[n+1][n+1];
 	
 	for(int i=1;i<=n;i++){
 	for(int j=1;j<=n;j++){
 		b[i][j] = a[i][j];
 	
	 }
	 
 }
 for(int i1=0;i1<q;i1++){
 	int p;
 	cin >> p;
 for(int i=1;i<=n;i++){
 	int ch;
 	cin >> ch;
 	b[p][i]=ch;
 	b[i][p]=ch;
 	
 }	
 	
 	 int s[n+1];
 
 s[1]=0;
 for(int i=2;i<=n;i++){
 	
 	s[i]=-b[i][1];
 	bool wo = true;
 	for(int j=1;j<i;j++){
    if(b[i][j]!=abs(s[i]-s[j])){
    	wo = false;
		break;
	} 		
 		
	 }
	 if(wo==false){
	 	s[i]=-s[i];
	 }
	 
	 
 }
 
 for(int i=1;i<=n;i++){
 	cout << s[i] << " ";
 	
 }
 cout << endl;
 	
 	
 	
 	
 }
 
 
 
 
   
 
 
 
return 0;
 
}
 
 
 
