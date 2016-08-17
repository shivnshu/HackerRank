#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, d, ans, num; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        ans = 0;
        scanf("%d",&n);
        num = n;
        d = num%10;
        while(num!=0){
            if(d!=0 && n%d==0)
                ans++;
            num = num/10;
            d = num%10;
        }
        printf("%d\n",ans);
    }
    return 0;
}
