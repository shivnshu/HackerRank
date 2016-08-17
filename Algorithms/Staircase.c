#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i, j, n, p, q; 
    scanf("%d",&n);
    
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
           
            if(n-j-i-1>0)printf(" ");
            else printf("#");
            
            
        }
        printf("\n");
    }
    
    return 0;
}

