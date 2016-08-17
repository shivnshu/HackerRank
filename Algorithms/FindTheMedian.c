#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quickSort(int *a, int l, int r){
    if(r-l<1)
        return;
    
    int p,i,j,t;
    p=a[r];
    i=l;
    
    for(j=l;j<r;++j){
        if(a[j]<=p){
            t=a[j];
            a[j]=a[i];
            a[i]=t;
            i++;
        }
    }
    t=a[r];
    a[r]=a[i];
    a[i]=t;
    
    quickSort(a,l,i-1);
    quickSort(a,i,r);
    
}

int main() {

    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    quickSort(a,0,n-1);
    
    //for(i=0;i<n;++i)printf("%d ",a[i]);
    
    printf("%d",a[n/2]);
    
    return 0;
}
