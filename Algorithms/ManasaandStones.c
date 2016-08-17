#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int a, int i){
    int ans = 0;
    for(int j=0;j<i;++j){
        ans += a;
    }
    return ans;
}

int main() {

    int t, n, a, b, ans=0, i, j;
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        
        scanf("%d%d%d",&n,&a,&b);
        
        if(a==b)
            printf("%d ",sum(a,n-1));
        
        else {for(i=0;i<n;++i){
            if(a<b)
                ans = sum(b,i) + sum(a,n-1-i);
            else if(a>b)
                ans = sum(a,i) + sum(b,n-1-i);
            
            printf("%d ",ans);
        }
             }
       printf("\n");
        
    
    }
    return 0;
}
