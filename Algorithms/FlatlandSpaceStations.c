#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m, max=0, min; 
    scanf("%d %d",&n,&m);
    int *c = malloc(sizeof(int) * m);
    for(int c_i = 0; c_i < m; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    for(int i=0;i<n;++i){
        min = abs(i - c[0]);
        
        for(int j=1;j<m;++j){
            if(min>abs(i-c[j])){
                min = abs(i-c[j]);
            }
        }
        if(max<min)
                max = min;
    }
    
    printf("%d",max);
    
    return 0;
}
