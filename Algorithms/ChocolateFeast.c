#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, count, wrap=0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int c; 
        int m; 
        scanf("%d %d %d",&n,&c,&m);
        
        count = n/c;
        wrap = n/c;
        count += wrap/m;
        wrap = wrap%m + wrap/m;
        while(wrap/m!=0){
            count+= wrap/m;
            wrap = wrap%m + wrap/m;
        }
        
        printf("%d\n",count);
    }
    return 0;
}

