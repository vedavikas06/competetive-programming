#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
int t;
 
cin >> t;
 
for (int i = 0; i < t; ++i)
{
  
int n;
 
cin >> n;
int arr[n],arr1[n];
 
for (int i = 0; i < n; ++i)
{
  
cin >> arr[i];
 
}
 
int k=0;
 
for (int i = n/2; i < n; ++i)
{
  arr1[k] = arr[i];
  k++;
}
 
for (int i = 0; i < n/2; ++i)
{
  arr1[k] = arr[i];
  k++;
}
 
 
int diff =0;
 
for (int i = 0; i < n; ++i)
{
  
 
if(arr[i]!=arr1[i]){
  diff++;
}
 
}
 
cout << diff << endl;
 
for (int i = 0; i < n; ++i)
{
  cout << arr1[i] << " ";
}
 
cout << endl;
 
 
}
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
