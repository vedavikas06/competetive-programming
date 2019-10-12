class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        
        
        // if(n==0 && m==0){
        //     return (double) 0;
        // }
        if(a.empty() || b.empty()){
            return a.empty()?((int)b.size()%2==0?(double)((b[(int)b.size()/2]+b[(int)b.size()/2 -1])/2.0):(double)b[(int)b.size()/2]):((int)a.size()%2==0?(double)((a[(int)a.size()/2]+a[(int)a.size()/2 -1])/2.0):(double)a[(int)a.size()/2]);
        }
        int n = a.size(),m = b.size(),median;
        if(n>m){
            swap(a,b);
        }
        n = a.size(),m = b.size();
        int min_i = 0,max_i=n,i,j;
        while(min_i<=max_i){
            i = (min_i+max_i)/2;
            j = (n+m+1)/2 - i;
            if(i<n && j>0 && b[j-1]>a[i]){
                min_i=i+1;
            }
            else if(i>0 && j<m && a[i-1]>b[j]){
                max_i = i-1;
            }
            else{
                if(i==0){
                    median = b[j-1];
                }else if(j==0){
                    median = a[i-1];
                }else{
                    median = max(a[i-1],b[j-1]);
                }
                break;
            }
        }
        
        if((n+m+1)%2 == 0){
            return (double) median;
        }else{
            if(i==n){
                median += b[j];
                return (double) median/2.0;
            }else if(j==m){
                median += a[i];
                return (double) median/2.0;
                
            }else{
                median += min(a[i],b[j]);
                return (double) median/2.0;
            }
        }
        
        
        
    }
};
