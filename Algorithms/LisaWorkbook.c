#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}

int main() {

    int n, k, p=1, i, ans=0, sp=1;
    scanf("%d%d",&n,&k);
    int t[n];
    for(i=0;i<n;++i)
        scanf("%d",&t[i]);
    
    for(i=1;i<=n;){
        if(p>=sp && p<=min(sp+k-1, t[i-1]))
            ans++;
        
        p++;
        sp += k;
        
        if(sp>t[i-1]){
            i++;
            sp = 1;
        }
            
        
    }
    
    printf("%d",ans);
    return 0;
}
