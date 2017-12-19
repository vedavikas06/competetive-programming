#include<bits/stdc++.h>
using namespace std;
 
 
//main function
int main(){
	
int t;
 
cin >> t;
 
for(int i=0;i<t;i++){
	 int n,v1,v2;
	cin >> n >> v1 >> v2;
	
	 double a,b;
	 a=((double)sqrt(2)*n/v1);//stairs
	 b=((double)n/v2)*2;//elevator
 
 if(a>b){
 	printf("Elevator\n");
 }else{
 	printf("Stairs\n");
 }
 
   
 
}
 
return 0;
 
}
 
 
 
 
 
 
 
