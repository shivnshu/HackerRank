#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int t, i, init=3, c; 
    scanf("%lld",&t);
    c = init;
    
    for(int n=1;;){
        
        if(t>=n && t<n+c){
            printf("%lld", c-(t-n));
            return 0;
        }
        else{
            n = n+c;
            c = 2*c;
        }
        
    }
    

}
