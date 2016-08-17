#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, m, s, ans;
    scanf("%d\n",&t);
    
    while(t>0){
        
        scanf("%d%d%d",&n,&m,&s);
        
        ans = (s+m)%n;
        ans = ans-1;
        if(ans==0)
            ans = n;
        printf("%d\n",ans);
        
        t--;
    }
    
    return 0;
}
