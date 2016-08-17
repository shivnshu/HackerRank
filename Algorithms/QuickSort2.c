#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void print(int l, int *a){
    for(int i=0;i<l;++i){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void quickSort(int size, int *arr) {
    
    if(size==1||size==0){
        return;
    }
    
    int p=arr[0];
    int l=0, r=0, left[size], right[size];
    for(int i=0;i<size;++i){
        if(arr[i]<p){
            left[l]=arr[i];
            l++;
        }
        else if(arr[i]>p){
            right[r]=arr[i];
            r++;
        }
    }
    
    quickSort(l, left);
    
    
    quickSort(r, right);
    
    
    for(int i=0;i<l;++i)
        arr[i]=left[i];
    arr[l]=p;
    for(int i=0;i<r;++i)
        arr[i+l+1]=right[i];
    
    print(size, arr);
    
}
int main(void) {
   int ar_size;
   scanf("%d", &ar_size);
   int ar[ar_size], i;
   for(i = 0; i < ar_size; i++) { 
      scanf("%d", &ar[i]); 
   }

   quickSort(ar_size, ar);
   
   return 0;
}
