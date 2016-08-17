#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,j,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;++i){
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(a[i]==b[j]&&b[j]!=0){
                a[i]=0;
                b[j]=0;
                count++;
            }
        }
    }
    
    if(count==n)
        printf("%d",count-1);
    else
        printf("%d",count+1);
    
    return 0;
}
