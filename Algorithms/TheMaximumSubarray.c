#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int i, int j){
    if(i>j)
        return i;
    
    return j;
    
}

int main() {

    int t,n,i,j,sum,max_including_it,max_till_now,m;
    scanf("%d",&t);
    for(int a0=0;a0<t;++a0){
        sum=0;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        
        max_including_it=a[0];
        max_till_now=a[0];
        if(a[0]>0)
            sum=a[0];
        m=a[0];
        for(i=1;i<n;++i){
            if(a[i]>m)
                m=a[i];
            if(a[i]>0)
                sum+=a[i];
            max_including_it = max(a[i],max_including_it+a[i]);
            max_till_now = max(max_including_it, max_till_now);
            
        }
        if(sum==0)
            sum=m;
        printf("%d %d\n",max_till_now,sum);
        
    }
    
    
    return 0;
}

