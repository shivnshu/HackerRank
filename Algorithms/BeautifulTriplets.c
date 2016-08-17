#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int nexist(int* a, int i, int n, int d, int c){
    if(c==2)
        return 1;
    int j;
    for(j=i+1;j<n;++j){
        if(a[j]==a[i]+d){
            return nexist(a,j,n,d,c+1);
            
        }
    }
    return 0;
}

int main() {
    
    int n, d, i, j, count=0;
    scanf("%d%d",&n,&d);
    int a[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-2;++i){
        if(nexist(a,i,n,d,0))
            count++;
    }
    
    printf("%d",count);
    return 0;
}
