#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,n,k,d; 
    scanf("%d\n",&t);
    int a[n];
    for(int  j= 0; j < t; j++){
        
        scanf("%d %d\n",&n,&k) ;
        int a[n];
           
        
        if(k!=0){
            d=n/k;
        }
          
        if (k == 0){
            for(int v=1;v<=n;v++){
                printf("%d ",v);
            }
        }
        
            
                
            else if((k<=n/2)&&(n%k==0)&&(d%2==0)){
                for(int p=0;p<n;p++){
                    if((p/k)%2==0){
                        a[p]=p+k+1;
                    }
                    else{
                        a[p]=p-k+1;
                    }
                }
                
            
        for(int r=0;r<n;r++){
            printf("%d ",a[r]);
        }
            
        
        }
            
          else{
              printf("-1");
          }
        printf("\n");
        }
        
    
    return 0;
}
