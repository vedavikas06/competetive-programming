#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int n, int k, vector < int > c){
    // Complete this function
    int cnt[k]={0},tot=0,j=0;
    for(int i=n-1;i>=0;i--){
        if(j==k){
            j=0;
        }
        
        cnt[j]++;
     tot+=(cnt[j]*c[i]);
        j++;
    }
    
    return tot;
    
    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
       cin >> c[i];
    }
    sort(c.begin(),c.end());
    int minimumCost = getMinimumCost(n, k, c);
    cout << minimumCost << endl;
    return 0;
}
