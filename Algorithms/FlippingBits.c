#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i;
    unsigned int num, n;
    num=pow(2,32);
    scanf("%d",&t);
    for(int a0=0;a0<t;a0++){
        scanf("%u",&n);
        printf("%u\n",(unsigned int)num^n);
    }
    
    return 0;
}
