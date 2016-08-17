#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int n, k, count=0;
    scanf("%d%d", &n, &k);
    int a[n], counts[k];
    for(int i=0;i<k;++i)
        counts[i] = 0;
    for(int i=0;i<n;++i){
        scanf("%d", &a[i]);
        counts[a[i]%k] += 1;
    }
    
    for(int i=1;i<=k/2;++i){
        if(counts[i] > counts[k-i] && i!=k-i)
            count += counts[i];
        else if(i!=k-i)
            count += counts[k-i];
    }
    if(k%2 == 0)
        if(counts[k/2] > 0)
            count++;
    
    if(counts[0] > 0)
        count++;
    
    printf("%d",count);
    
    return 0;
}

