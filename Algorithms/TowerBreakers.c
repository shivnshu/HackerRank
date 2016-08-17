#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,m;
    scanf("%d",&t);
    for(int a0=0;a0<t;++a0){
        
        scanf("%d%d",&n,&m);
        printf("%d\n",(m == 1 || n % 2 == 0 ? 2 : 1));
        
    }
    
    return 0;
}
