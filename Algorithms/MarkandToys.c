#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quickSort(int *a, int l, int r){
    if(r-l<1)
        return;
    
    int p=a[r];
    int j, i=l,t;
    
    for(j=l;j<r;++j){
        if(a[j]<=p){
            t=a[j];
            a[j]=a[i];
            a[i]=t;
            i++;
        }
    }
    
    a[r]=a[i];
    a[i]=p;
    
    quickSort(a,l,i-1);
    quickSort(a,i,r);
    
}

int main() {
    int n, k, i, count=0;
    scanf("%d%d", &n, &k);
    int *prices = (int *)malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        scanf("%d", &prices[i]);
    }
     
   
    int answer = 0;
    
    quickSort(prices,0,n-1);
    
    for(i=0;i<n;++i){
        count += prices[i];
        if(count>=k){
            break;
        }
        answer++;
    }
    
    printf("%d\n", answer);
      
    return 0;
}
