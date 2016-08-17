#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, n, k, q, j;
    scanf("%d%d%d",&n,&k,&q);
    unsigned long int a[n], b[n];
    
    while(k>n)k=k-n;
    
    for(i=0;i<n;++i)scanf("%ld",&a[i]);
    
    for(i=0;i<n;++i){
            b[i] = a[(i-k+n)%n];
        }
    
    for(i=0;i<q;++i){
        scanf("%d",&j);
        printf("%ld\n",b[j]);
    }
    
    return 0;
}

