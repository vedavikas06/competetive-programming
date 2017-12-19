#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int search(char **g,char **p,int R,int C,int r,int c){
    int flag;
for(int i=0; i <= R-r; i++) {
        for(int j=0; j <= C-c; j++) {
            flag =0;
            for(int k=0; k < r; k++) {
                for(int l=0; l < c; l++) {
                    if(g[i+k][j+l] != p[k][l]) {
                        flag = 1;
                        break;
                    }
                }
                if(flag) {
                    break;
                }
            }
            if(!flag){
                return 1;
                      
                     }
        }       
    }
    return 0;
}    
    
    
    
    
    
    
    


int main(){
    int t; 
    scanf("%d",&t);
    for(int i= 0; i < t; i++){
        int R; 
        int C; 
        scanf("%d %d",&R,&C);
        char* *G = malloc(sizeof(char*) * R);
        for(int i = 0; i < R; i++){
           G[i] = (char *)malloc(10240 * sizeof(char));
           scanf("%s",G[i]);
        }
        int r; 
        int c; 
        scanf("%d %d",&r,&c);
        char* *P = malloc(sizeof(char*) * r);
        for(int i = 0; i < r; i++){
           P[i] = (char *)malloc(10240 * sizeof(char));
           scanf("%s",P[i]);
        }
        
        if(search(G,P,R,C,r,c)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        
        
        
        
        
        
    }
    return 0;
}
