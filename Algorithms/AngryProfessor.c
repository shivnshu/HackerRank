#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n, count = 0; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
            if(a[a_i]<=0)
                count++;
        }
        if(count < k)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    return 0;
}
