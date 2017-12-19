#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int i = 0;i < n;i++){
       cin >> x[i];
    }
    sort(x.begin(),x.end());
    int i=0,noTrans=0,j;
    while(i<n){
        noTrans++;
        int plc=x[i]+k;
       while(i<n&&x[i]<=plc) i++;
        i--;
        plc=x[i]+k;
        
         while(i<n&&x[i]<=plc) i++;
        
        
        
    }
    
    cout << noTrans << endl;
    
    
    
    return 0;
}
