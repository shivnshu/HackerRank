#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, min=0, i, j; 
    scanf("%d",&n);
    int *A = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&A[i]);
    }
    
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(A[i]==A[j]){
                if(min==0)
                    min = abs(i-j);
                else if(min>abs(i-j)){
                    min = abs(i-j);
                }
            }
            
        }
    }
    
    if(min==0)
        printf("-1");
    else
        printf("%d",min);
    return 0;
}
