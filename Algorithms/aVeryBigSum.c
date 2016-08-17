#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i; 
    scanf("%d",&n);
    long long int arr[n];
    long long int sum=0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    
    for(i=0;i<n;++i)
        sum += arr[i];
    
    printf("%lld",sum);
    
    return 0;
}

