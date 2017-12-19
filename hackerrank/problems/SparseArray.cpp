#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string s;
    
    cin >> n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
       cin >> s; 
       mp[s]++;
       
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> s;
        cout << mp[s] << endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
