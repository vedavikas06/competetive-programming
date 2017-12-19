#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long int t; 
    scanf("%ld",&t);
  long int n=2;
    while(3*(n-1)<t){
        n*=2;
    }
    printf("%ld",3*(n-1)-t+1);
    return 0;
}
