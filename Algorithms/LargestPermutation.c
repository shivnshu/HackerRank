#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a, int i, int j){
    
    int t;
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    
}

int main() {

    int n,i,j,k;
    scanf("%d%d",&n,&k);
    int a[n],b[n+1];
    
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        b[a[i]]=i;
    }
    
    for(i=0;i<n&&k>0;++i){
        
        if(a[i]==(n-i))
            continue;
        
        a[b[n-i]]=a[i];
        b[a[i]]=b[n-i];
        a[i]=n-i;
        b[n-i]=i;
        k--;
        
    }
    
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    
    return 0;
    
}
