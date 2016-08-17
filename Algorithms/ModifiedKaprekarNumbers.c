#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int ndigit(int i){
    int count = 0;
    while(i!=0){
        count++;
        i = i/10;
    }
    return count;
}

int main() {

    int p, q, i, d, l, flag=1;
    long long m;
    scanf("%d%d",&p,&q);
    
    for(i=p;i<=q;++i){
        d = ndigit(i);
        l = pow(10,d);
        m = (long long)i*i;
        if((((m/l) + (m%l)) == i)){
            printf("%d ",i);
            flag = 0;
        }
    }
    if(flag)
        printf("INVALID RANGE");
    return 0;
}

