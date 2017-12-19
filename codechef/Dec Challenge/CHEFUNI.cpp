#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main(){
 
 
ios_base::sync_with_stdio(false);
 
cin.tie(NULL);
 
int t;
 
cin >> t;
 
for (int i = 0; i < t; ++i)
{
  
int x,y,z,a,b,c;
 
 
cin >> x >> y >> z >> a >> b >> c;
 
 
int arr[x+1][y+1][z+1];
 
for (int i = 0; i <= x; ++i)
{
  for (int j = 0; j <= y; ++j)
  {
    
    for (int k = 0; k <= z; ++k)
    {
      
 
 
    arr[i][j][k] = 0;
 
 
    }
  }
}
 
for (int i = 1; i <= x; ++i)
{
  arr[i][0][0] = arr[i-1][0][0]+a;
}
for (int i = 1; i <= y; ++i)
{
  arr[0][i][0] = arr[0][i-1][0]+a;
}
 
for (int i = 1; i <= z; ++i)
{
  arr[0][0][i] = arr[0][0][i-1]+a;
}
//-------------
 
  for (int j = 1; j <= y; ++j)
  {
    
 
    
    for (int k = 1; k <= z; ++k)
    {
      
 
 
    arr[0][j][k] = min(arr[0][j][k-1]+a,min(arr[0][j-1][k]+a,arr[0][j-1][k-1]+b));
 
 
    }
 
  }
 
//------------
for (int i = 1; i <= x; ++i)
{
  for (int j = 1; j <= y; ++j)
  {
    
    arr[i][j][0] = min(arr[i-1][j][0]+a,min(arr[i][j-1][0]+a,arr[i-1][j-1][0]+b));
  }
 
}
 
//----------
for (int i = 1; i <= x; ++i)
{
 
    
    for (int k = 1; k <= z; ++k)
    {
      
 
 
arr[i][0][k] = min(arr[i-1][0][k]+a,min(arr[i][0][k-1]+a,arr[i-1][0][k-1]+b));    
 
 
    }
  
}
 
//----------
 
 
for (int i = 1; i <= x; ++i)
{
  for (int j = 1; j <= y; ++j)
  {
    
    for (int k = 1; k <= z; ++k)
    {
      
 
arr[i][j][k] = min(arr[i-1][j][k]+a,min(arr[i][j-1][k]+a,min(arr[i][j][k-1]+a,min(arr[i-1][j-1][k]+b,min(arr[i][j-1][k-1]+b,min(arr[i-1][j][k-1]+b,arr[i-1][j-1][k-1]+c))))));
   
 
 
    }
  }
}
 
 
 
 
cout << arr[x][y][z] << endl;
 
 
 
 
}
 
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
