#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void print(int i,int j){
    i=5*i;
    j=3*j;
    while(j>0){
        printf("%c",'5');
        j--;
    }
    while(i>0){
        printf("%c",'3');
        i--;
    }
    printf("\n");
}

int main(){
    int t,i,j,a=5,b=3,flag; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        flag=0;
        int n; 
        scanf("%d",&n);
        for(i=0;i<=n/5;i++){//3
            
            for(j=0;j<=n/3;j++){//5
              
                if((5*i+3*j)==n){
                    
                    print(i,j);
                    
                    flag=1;
                    break;
                }
                
            }
            if(flag)break;
        }
        if(!flag)
            printf("%d\n",-1);
    }
    return 0;
}

