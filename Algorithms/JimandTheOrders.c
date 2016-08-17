#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(int *a, int *d, int i, int n){
    int j=a[i];
    int p=d[i];
    
    while(i-1>=0&&a[i-1]>=j){
        a[i]=a[i-1];
        d[i]=d[i-1];
        i--;
    }
    
    a[i]=j;
    d[i]=p;
    
}

void insertionSort(int *a, int * d, int n){
    for(int i=0;i<n;++i){
        sort(a,d,i,n);
    }
}

int main() {

    int n,i,j,k;
    scanf("%d",&n);
    int t[n],d[n],a[n];
    for(i=0;i<n;++i){
        scanf("%d%d",&t[i],&d[i]);
        a[i] = t[i]+d[i];
        d[i]=i+1;
    }
    
    
    
    insertionSort(a,d,n);
    
    
    for(i=0;i<n;++i){
        j=0;
        while((i+1)<n&&a[i]==a[i+1]){
            j++;
            i++;
        }
        k=i;
        while(j>=0){
            printf("%d ",d[i]);
            j--;
            i--;
        }
        i=k;
    }
    
    return 0;
}

