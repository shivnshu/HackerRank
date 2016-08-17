#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,i,m,j;
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        scanf("%d\n%d\n",&m,&n);
        int a[n];
        
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        
        for(i=0;i<n-1;++i){
            for(j=i+1;j<n;++j){
                if((a[i]+a[j])==m)
                    printf("%d %d\n",i+1,j+1);
            }
        }
        
    }
    
    return 0;
}

