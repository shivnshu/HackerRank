#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int *b, int i){
    for(int j=0;j<b[i];++j){
        printf("%d ",i);
    }
}

int main() {

    int n,i,j,b[100]={0};
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<100;++i){
        print(b,i);
    }
    
    return 0;
}
