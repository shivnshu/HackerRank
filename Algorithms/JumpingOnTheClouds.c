#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int min(int min1, int min2){
    if(min1<min2) return min1;
    else return min2;
}

int jump(int *a, int n, int i){
    if(a[i] == 1) return -1;
    if(i == n-1) return 1;
    if(i == n-2) return 2;
    int min1 = jump(a, n, i+1);
    int min2 = jump(a, n, i+2);
    if(min1 == -1 && min2 != -1)
        return 1 + min2;
    else if(min1 != -1 && min2 == -1)
        return 1 + min1;
    else if(min1 != -1 && min2 != -1)
        return 1 + min(min1, min2);
    else return -1;
}

int main(){
    int n, ans; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    
    ans = jump(c, n, 0);
    
    printf("%d",ans - 1);
    return 0;
}
