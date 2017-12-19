#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    long long *v=new long long[n];
    for(int i=0;i<n;i++){
       v[i]=0;
    }
   
    for(int i=0;i<m;i++){
        int a,b;
        long long k;
        
        cin >> a >> b >> k;
       
        v[a-1]+=k;
        if(b<n){
            v[b]-=k;
            
        }
        
        
        
        
        
    }
    
    
    
    long long answer=0,up=0;
    
    for(int i=0;i<n;i++){
        up+=v[i];
        if(up>answer){
            answer=up;
            
        }
       
    }
    
    cout << answer << endl;
    
    
    
    
    
    return 0;
}
