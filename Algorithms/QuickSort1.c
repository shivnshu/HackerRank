#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void partition(int size, int *  arr) {

    int p=arr[0], left[size],right[size];
    int l=0, r=0;
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
    
    for(int i=0;i<l;++i)
        printf("%d ",left[i]);
    printf("%d ",p);
    for(int i=0;i<r;++i)
        printf("%d ",right[i]);

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}

