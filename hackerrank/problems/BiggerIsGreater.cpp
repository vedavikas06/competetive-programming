#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     string s;
        cin >> s;
        if(next_permutation(s.begin(),s.end())){
            cout << s << endl;
        }
        else{
            cout << "no answer" << endl;
        }
        
        
    }
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
