#include <bits/stdc++.h>
using namespace std;

vector<int> quickSort(vector <int> &arr) {
    
    vector<int> left,right;
    
    if(arr.size()<=1){
        return arr;
    }
    int pivot=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]<=pivot){
            left.push_back(arr[i]);
        }
        else{
            right.push_back(arr[i]);
        }
    }
    
 left= quickSort(left);
 right=quickSort(right);
    left.push_back(pivot);
    
    for(int i=0;i<right.size();i++){
        left.push_back(right[i]);
    }
    
    for(int i=0;i<left.size();i++){
        cout << left[i] << " ";
    }
    cout << "\n";
    
    return left;
    
}
    


int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
