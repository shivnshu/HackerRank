#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int v, n,i;
    scanf("%d\n%d",&v,&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        if(a[i]==v){
            printf("%d",i);
            break;
    }
    }    
    return 0;
}

