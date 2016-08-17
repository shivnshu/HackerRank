#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quickSort(long *a, int l, int r){
    
    if((r-l)<1)
        return;
    
    int i,p,j,t;
    p = a[r];
    i = l;
    for(j=l;j<r;++j){
        if(a[j]<=p){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
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

    int n,i,min;
    scanf("%d\n",&n);
    long a[n];
    for(i=0;i<n;++i){
        scanf("%ld",&a[i]);
    }
    quickSort(a,0,n-1);
    
    min=(a[1]-a[0]);
    
    for(i=1;i<n-1;++i){
        if(min>(a[i+1]-a[i]))
            min=a[i+1]-a[i];
    }
    //printf("%d\n",min);
    //for(i=0;i<n;++i)printf("%ld ",a[i]);
    
    for(i=0;i<n-1;++i){
        if(min==(a[i+1]-a[i]))
            printf("%ld %ld ",a[i],a[i+1]);
    }
    
    return 0;
}
