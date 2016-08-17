#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,b[100]={0};
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i=0;i<100;++i){
        printf("%d ",b[i]);
    }
    
    return 0;
    
}
