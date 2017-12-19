#include <bits/stdc++.h>

using namespace std;

vector<long long> factorize(long long n) {
    vector<long long> res;
    res.push_back(1);
    while (n % 2 == 0) {
            res.push_back(2);
            n /=2;
        }
    for (long long i = 3; i * i <= n; i+=2) {
        while (n % i == 0) {
            res.push_back(i);
            n /= i;
        }
        if(n==1){
            return res;
        }
    }
    if (n != 1) {
        res.push_back(n);
    }
    return res;
}

long longestSequence(vector <long long> a) {
    //  Return the length of the longest possible sequence of moves.
    long long sum = 0;
    
    for(int i=0;i<a.size();i++){
        
        vector<long long> v = factorize(a[i]);
        
        long long inti = 1,pr_sum=0;
        
        for(int j=0;j<v.size();j++){
            inti*=v[j];
            
          pr_sum+=(a[i]/inti);  
            
            
        }
        
        
      sum+=pr_sum;  
        
        
        
    }
    
    
    
    
    
    
    return sum;
    
    
}

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    long long result = longestSequence(a);
    cout << result << endl;
    return 0;
}

