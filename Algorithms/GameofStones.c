#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int player2(int n){
    
    if(n<2)
        return 1;
    
    return (player1(n-5)&&player1(n-3)&&player1(n-2));
    
}

int player1(int n){
    
    if(n<2)
        return 0;
    
    return (player2(n-5)||player2(n-3)||player2(n-2));
    
}

int main() {

    int n,t,i,j;
    scanf("%d",&t);
    for(int a0=0;a0<t;++a0){
        
        scanf("%d",&n);
        
        i = player1(n);
        
        if(i==1)
            printf("First\n");
        else
            printf("Second\n");
        
    }
    
    return 0;
}

