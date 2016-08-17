#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int findMin(int *arr, int n){
    int i, min = 1000;
    for(i=0;i<n;++i){
        if(min>arr[i] && arr[i] > 0)
            min = arr[i];
    }
    return min;
}

int main(){
    int n, min, count; 
    scanf("%d",&n);
    count = n;
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    min = findMin(arr, n);
    
    while(min!=0 && count > 0){
        printf("%d\n",count);
        if( count == 1)break;
        for(int i=0;i<n;++i){
            if(arr[i] > 0)
                if((arr[i] = arr[i] - min) == 0)
                    count--;
           
        }
        min = findMin(arr, n);
          
    }
    return 0;
}
