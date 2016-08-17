#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i;
    float pos=0, neg=0; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for(i=0;i<n;++i){
        if(arr[i]>0)pos += 1;
        else if(arr[i]<0)neg += 1;
    }
    
    printf("%f\n%f\n%f", pos/n, neg/n, (n-pos-neg)/n);
    
    return 0;
}
