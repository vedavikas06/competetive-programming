#include <bits/stdc++.h>

using namespace std;

int minimumTime(vector <int> x) {
    //  Return the minimum time needed to visit all the houses.
    int sum = 0;
    
   vector<int> v(x);
    sort(v.begin(),v.end());
    
    for(int i=1;i<v.size();i++){
        sum+=(v[i]-v[i-1]);
        
    }
    
    
    return sum;
    
    
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> x(n);
        for(int x_i = 0; x_i < n; x_i++){
           cin >> x[x_i];
        }
        int result = minimumTime(x);
        cout << result << endl;
    }
    return 0;
}
