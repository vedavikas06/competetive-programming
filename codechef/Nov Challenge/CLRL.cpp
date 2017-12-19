#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int t;
 
cin >> t;
 
for (int i = 0; i < t; ++i)
{
 
long n,r1;
 
cin >> n >> r1;
 
long long a1[n];
 
for (int i = 0; i < n; ++i)
{
	cin >> a1[i];
}
 
if(n<=2){
	cout << "YES" << endl;
}else{
 
 
	int l = 0,r=*max_element(a1,a1+n)+1;
 
   for (int i = 1; i < n; ++i)
   {
   	if(l<a1[i] && a1[i] < r){
 
   	if(a1[i-1]>a1[i]){
 
   		r = a1[i-1];
 
   	}else {
 
    l = a1[i-1];
 
   	}
 
 
 
   }else{
 
cout << "NO" << endl;
 
break;
 
 
   }
 
   if(i==n-1 && a1[i] == r1){
cout << "YES" << endl;
 
   }else if(i==n-1){
   	cout << "NO" << endl;
 
   }
 
 
 
}
 
 
 
	
}
 
 
 
 
 
}
 
 
 
 
 
 
 
	
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
