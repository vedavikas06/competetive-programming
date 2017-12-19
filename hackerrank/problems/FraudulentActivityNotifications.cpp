#include<bits/stdc++.h>
using namespace std;

/*bool comp(int a,int b){
    return a<b;
}*/



int main() {
    int n, d;
    cin >> n >> d;
    vector<int> num (n,0);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    
    deque<int> w(num.begin(), num.begin()+d);
    deque<int> ::iterator o,c;
    
    sort (w.begin(), w.end());
 
    int cnt = 0;
    
    for (int i=d; i < n; i++) {
        int median;
        int a = w.size()/2;
        if (d%2 == 1) {
            median = 2 * w[a];
        } else {
            median =  w[(a)-1] + w[a];
        }
        if (num[i] >= median) {
            cnt++;
        }
         o = lower_bound(w.begin(), w.end(), num[i-d]);
        w.erase(o);
         c = upper_bound (w.begin(), w.end(), num[i]);
        w.insert (c,1,num[i]);
        
       
    }
    w.clear();
    cout << cnt << endl;
}
    
