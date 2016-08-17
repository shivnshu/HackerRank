#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void print(int l,int *a){
    for(int i=0;i<l;++i){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertionSort(int size, int *  arr) {
    
    int i=size-1;
    int a=arr[i];
    
    while(i-1>=0&&arr[i-1]>a){
        arr[i]=arr[i-1];
        print(size,arr);
        i--;
    }
    arr[i]=a;
    print(size,arr);
    
}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
    return 0;
}
