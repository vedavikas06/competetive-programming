#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, K, unfairness = INT_MAX;
    cin >> N >> K;
    int list[N];
    for (int i=0; i<N; i++)
        cin >> list[i];
    sort(list,list+N);
    for(int i=0;i<=N-K;i++){
        int a=list[i];
        int b=list[i+K-1];
        if(b-a<unfairness){
            unfairness=b-a;
        }
        
        
        
    }
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    cout << unfairness << "\n";
    return 0;
}

