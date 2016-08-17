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

void quickSort2(int *a, int l, int r){
    
    if(r-l<1)
        return;
    
    int p=a[r];
    int i=l,j,t;
    
    for(j=l;j<r;++j){
        if(a[j]>=p){
            t=a[j];
            a[j]=a[i];
            a[i]=t;
            ++i;
        }
    }
    
    a[r]=a[i];
    a[i]=p;
    
    quickSort2(a,l,i-1);
    quickSort2(a,i,r);
    
}

int main() {

    int t,n,k,i,j,flag;
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        flag=0;
        scanf("%d%d",&n,&k);
        int a[n],b[n];
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        for(i=0;i<n;++i)
            scanf("%d",&b[i]);
        
        quickSort1(a,0,n-1);
        quickSort2(b,0,n-1);
        
        for(i=0;i<n;++i){
            if(a[i]+b[i]<k){
                printf("NO\n");
                flag=1;
                break;
            }
        }
        
        if(!flag)
            printf("YES\n");
        
    }
    return 0;
}

