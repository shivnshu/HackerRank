#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, l, count=0; 
    scanf("%d",&n);
    char* B = (char *)malloc(10240 * sizeof(char));
    scanf("%s",B);
    l =strlen(B);
    for(int i=0;i<l-2;++i){
        if(B[i]=='0'&&B[i+1]=='1'&&B[i+2]=='0'){
            B[i+2] = '1';
            i += 2;
            count++;
        }
        
    }
    printf("%d",count);
    return 0;
}
