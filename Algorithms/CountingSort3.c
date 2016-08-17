#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print(int *a, int i){
    int sum=0;
    for(int j=0;j<=i;++j){
        sum += a[j];
    }
    
        printf("%d ",sum);
}

int main() {

    int n,i,b[100]={0};
    char s[1000];
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d %s\n",&a[i],s);
        b[a[i]]++;
    }
    
    for(i=0;i<100;++i){
        print(b,i);
    }
    
    return 0;
}

