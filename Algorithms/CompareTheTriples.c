#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0,i,s1=0,s2=0,s=0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    
    if(a0>b0)
        s1+=1;
    else if(a0<b0)
        s2+=1;
    if(a1>b1)
        s1+=1;
    else if(a1<b1)
        s2+=1;
    if(a2>b2)
        s1+=1;
    else if(a2<b2)
        s2+=1;
        
    printf("%d %d",s1,s2);
    return 0;
}

