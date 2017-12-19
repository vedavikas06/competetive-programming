#include<bits/stdc++.h>
using namespace std;
 
 
//main function
int main(){
	
int t;
 
cin >> t;
 
for(int i=0;i<t;i++){
	 long long k,a,b;
	cin >> k >> a >> b;
	long long l,m;
	l=abs(a-b)-1;
	m=k-l-2;
	 
 if(l>m){
 	cout << m << endl;
 }else if(l<m){
 	cout << l << endl;
 }else{
 	cout << "0" << endl;
 }
   
 
}
 
return 0;
 
}
 
 
 
 
