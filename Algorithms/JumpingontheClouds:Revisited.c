#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, e=100; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    for(int i=k%n;;i = (i+k)%n){
        if(c[i] == 1){
            e = e -3;
        }
        else
            e = e - 1;
        if(i == 0){
            break;
        }
    }
    
    printf("%d",e);
    return 0;
}
