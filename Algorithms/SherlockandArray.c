#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {

    int t,n,flag,rightsum=0,leftsum=0;
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        rightsum=0;
        leftsum=0;
        flag=0;
        scanf("%d\n",&n);
        int a[n];
        for(int i=0;i<n;++i){
            scanf("%d",&a[i]);
            rightsum += a[i];
        }
        
        for(int i=0;i<n;++i){
            rightsum = rightsum - a[i];
            if(i-1>=0)
                leftsum += a[i-1];
            if(leftsum==rightsum){
                printf("YES\n");
                flag=1;
                break;
            }
            //printf("%d %d\n",leftsum,rightsum);
        }
        if(!flag)
            printf("NO\n");
    }
    
    return 0;
}

