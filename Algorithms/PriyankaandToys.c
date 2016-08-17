#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quickSort1(int *a, int l, int r){
    
    if(r-l<1)
        return;
    
    int p=a[r];
    int i=l,j,t;
    
    for(j=l;j<r;++j){
        if(a[j]<=p){
            t=a[j];
            a[j]=a[i];
            a[i]=t;
            ++i;
        }
    }
    
    a[r]=a[i];
    a[i]=p;
    
    quickSort1(a,l,i-1);
    quickSort1(a,i,r);
    
}

int main() {

    int i,j,n,w,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    quickSort1(a,0,n-1);
    
    for(i=0;i<n;++i){
        
        w=a[i];
        count++;
        for(;i<n;++i){
            if(a[i]>(w+4)){
                --i;
                break;
            }
        }
        
    }
    
    printf("%d",count);
    
    return 0;
}

