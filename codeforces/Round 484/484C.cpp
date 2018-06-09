//484C.cpp
#include<bits/stdc++.h>
using namespace std;

int a[100010];

vector<int> v[100010];

int DFSUtil(int l, bool visited[])
{
    
    visited[l] = true;
    
    a[l] = 1;
    
    vector<int>::iterator i;
    
    for (i = v[l].begin(); i != v[l].end(); ++i){

        if (!visited[*i]){
           a[l] += DFSUtil(*i, visited);
        }

    }

    return a[l];

}



int main() {
    
    int n,m;

    cin >> n ;
    
    
   
   for (int i = 0; i < n-1; ++i)
      {
          int a,b;

          cin >> a >> b;

          v[a].push_back(b);

          v[b].push_back(a);
      }   
 
bool *visited = new bool[n+1];

for (int i = 1; i <=  n; i++)
        visited[i] = false;


DFSUtil(1,visited);

int cnt =0;
    
     for(int i=2;i<=n;i++){
        
         if(a[i]%2==0){
             cnt++;
         }
        
     
    }
    
    if(n%2 == 0)
        cout << cnt << endl;
    else
        cout << "-1" << endl;

    
    
    
    
    
    
    return 0;
}
