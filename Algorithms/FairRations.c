#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int fn(int *a, int n){
    if(n==1){
        if(a[n-1]%2!=0){
            printf("NO");
            exit(0);
        }
        else return 0;
    }
    
    int i, value;
    if(a[n-1]%2==0)
        return fn(a, n-1);
    else{
        a[n-2] += 1;
        value = fn(a,n-1);
        a[n-2] -= 1;
        return value + 2;
    }
        
        
}

int main(){
    int N, ans; 
    scanf("%d",&N);
    int *B = malloc(sizeof(int) * N);
    for(int B_i = 0; B_i < N; B_i++){
       scanf("%d",&B[B_i]);
    }
    
    ans = fn(B,N);
    printf("%d",ans);
    return 0;
}
