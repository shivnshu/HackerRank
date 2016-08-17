#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t;
    long cost; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long b; 
        long w; 
        scanf("%ld %ld",&b,&w);
        long x; 
        long y; 
        long z; 
        scanf("%ld %ld %ld",&x,&y,&z);
        cost = 0;
        
        if(x+z<y){
            cost += x*(b+w);
            cost += z*w;
        }
        else if(y+z<x){
            cost += y*(b+w);
            cost += z*b;
        }
        else{
            cost += b*x;
            cost += w*y;
        }
        
        printf("%ld\n",cost);
    }
    return 0;
}
