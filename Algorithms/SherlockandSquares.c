#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, m, n, i, count;
    scanf("%d",&t);
    
    for(int a0=0;a0<t;++a0){
        scanf("%d%d",&m,&n);
        if(sqrt(m)!=(int)sqrt(m))
            i = floor(sqrt(m)+1);
        else
            i = sqrt(m);
        count = 0;
        while(i*i<=n){
            count++;
            i += 1;
        }
        printf("%d\n",count);
    }
    return 0;
}
