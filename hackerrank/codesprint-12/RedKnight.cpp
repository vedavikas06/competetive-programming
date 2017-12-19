#include <bits/stdc++.h>

using namespace std;

int dp[201][201];

int dpx[201][201];

int dpy[201][201];

bool valid(int a1,int b1,int n){
    
    bool isValid = (a1>=0)&&(a1<n)&&(b1>=0)&&(b1<n);
    
    return isValid;
    
    
    
}

void conT(int a,int b,int n){
    
    if(valid(a-2,b-1,n) && min(dp[a-2][b-1],dp[a][b]+1)!=dp[a-2][b-1]){
        
        dp[a-2][b-1] = min(dp[a-2][b-1],dp[a][b]+1);
        
        dpx[a-2][b-1] = a;
        
        dpy[a-2][b-1] = b;
       
        conT(a-2,b-1,n);
    }
    
    if(valid(a-2,b+1,n) && min(dp[a-2][b+1],dp[a][b]+1)!=dp[a-2][b+1]){
        
        dp[a-2][b+1] = min(dp[a-2][b+1],dp[a][b]+1);
        
        dpx[a-2][b+1] = a;
        
        dpy[a-2][b+1] = b;
        
        
        conT(a-2,b+1,n);
    }
    if(valid(a,b+2,n) && min(dp[a][b+2],dp[a][b]+1)!= dp[a][b+2]){
        
        dp[a][b+2] = min(dp[a][b+2],dp[a][b]+1);
        
        dpx[a][b+2] = a;
        
        dpy[a][b+2] = b;
        
        conT(a,b+2,n);
    }
    if(valid(a+2,b+1,n) && min(dp[a+2][b+1],dp[a][b]+1)!=dp[a+2][b+1]){
        
        dp[a+2][b+1] = min(dp[a+2][b+1],dp[a][b]+1);
        
         dpx[a+2][b+1] = a;
        
        dpy[a+2][b+1] = b; 
        
        conT(a+2,b+1,n);
    }
    if(valid(a+2,b-1,n) && min(dp[a+2][b-1],dp[a][b]+1)!=dp[a+2][b-1]){
        
        dp[a+2][b-1] = min(dp[a+2][b-1],dp[a][b]+1);
        
         dpx[a+2][b-1] = a;
        
        dpy[a+2][b-1] = b;
        
        conT(a+2,b-1,n);
    }
    
    if(valid(a,b-2,n) && min(dp[a][b-2],dp[a][b]+1)!=dp[a][b-2]){
        
        dp[a][b-2] = min(dp[a][b-2],dp[a][b]+1);
        
         dpx[a][b-2] = a;
        
        dpy[a][b-2] = b;
        
        conT(a,b-2,n);
    }
    
    
}






void printShortestPath(int n, int i_start, int j_start, int i_end, int j_end) {
    //  Print the distance along with the sequence of moves.
    
    
    dp[i_start][j_start] = 0;
    
    conT(i_start,j_start,n);
    
    //cout << dp[i_end][j_end] << endl;
    
    if( dp[i_end][j_end] == INT_MAX){
        
        
     cout << "Impossible" << endl;
        
    }else{
    
        cout << dp[i_end][j_end] << endl;
        
        vector<string> v;
        
        int a = i_end;
        
        int b= j_end;
        
      
        
        while(!(a==i_start && b==j_start)){
            
            
            if(dpx[a][b] == a-2 && dpy[a][b] == b-1){
                
                //cout << "UL" << " ";
                
                v.push_back("LR");
                
                a = a-2;
                
                b= b-1;
            }else if(dpx[a][b] == a-2 && dpy[a][b] == b+1){
                
                //cout << "UR" << " ";
                
                v.push_back("LL");
                
                a = a-2;
                
                b= b+1;
            }else if(dpx[a][b] == a && dpy[a][b] == b+2){
                
               // cout << "R" << " ";
                
                v.push_back("L");
                
                a = a;
                
                b= b+2;
            }else if(dpx[a][b] == a+2 && dpy[a][b] == b+1){
                
                //cout << "LR" << " ";
                
                v.push_back("UL");
                
                a = a+2;
                
                b= b+1;
            }else if(dpx[a][b] == a+2 && dpy[a][b] == b-1){
                
                //cout << "LL" << " ";
                
                v.push_back("UR");
                
                a = a+2;
                
                b= b-1;
                
            }else if(dpx[a][b] == a && dpy[a][b] == b-2){
                
                //cout << "L" << " ";
                
                v.push_back("R");
                
                a = a;
                
                b= b-2;
            }
            
              
        }
        
        for(int i=v.size()-1;i>=0;i--){
            cout << v[i] << " ";
        }
        
       cout << endl; 
    }
    
    
    
    
}

int main() {
    int n;
    cin >> n;
    int i_start;
    int j_start;
    int i_end;
    int j_end;
    cin >> i_start >> j_start >> i_end >> j_end;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dp[i][j] = INT_MAX;
            dpx[i][j] = -1;
            dpy[i][j] = -1;
          
        }
    }
    
    
    printShortestPath(n, i_start, j_start, i_end, j_end);
    return 0;
}

