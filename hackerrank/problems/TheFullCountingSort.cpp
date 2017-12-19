#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct str{
  int t;
    int h;
    string s;
};
bool comp(str u,str v){
    if(u.h==v.h){
        return u.t < v.t;
    }
    else{
        return u.h < v.h;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
     int n,x;
    cin >> n;
    vector<str> s;
    string s1;
    str a;
    for(int i=0;i<n;i++){
        if(i<n/2){
            cin >> x >> s1;
           a.t=i+1;
            a.h=x;
            a.s=s1;
       
        s.push_back(a);
    }
        else{
              cin >> x >> s1;
             a.t=i+1;
            a.h=x;
            a.s=s1;
        
        s.push_back(a);
        }
    }
        sort(s.begin(),s.end(),comp);
        
     for(int i=0;i<n;i++){
         if(s[i].t>n/2){
         cout << s[i].s <<" ";
         }else{
             cout << "-" << " ";
         }
     }
        
    return 0;

    
}
