#include<bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> v(n);
    
    for(int i=0;i<n;i++){
        
        v[i].first = 1;
        v[i].second = -100;
        
    }
    
    
     for(int i=0;i<n-1;i++){
        
         int a,b;
         cin >> a >> b;
         
         v[a-1].second = b-1;
         
     
    }
    
     for(int i=n-1;i>=0;i--){
        
         if(v[i].second>=0){
             
         v[v[i].second].first+=v[i].first;  
             
         }
     
    }
    int cnt=0;
     for(int i=0;i<n;i++){
        
         if(v[i].second>=0 && v[i].first%2==0){
             cnt++;
         }
        
     
    }
    
    cout << cnt << endl;
    
    
    
    
    
    
    
    return 0;
}

