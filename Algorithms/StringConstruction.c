#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int exist(char *str, int i){
    int l = strlen(str);
    for(int j=0;j<i;++j){
        if(str[j]==str[i])
            return 1;
    }
    return 0;
}

int main(){
    int n, i, l, count; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        count = 0;
        char* s = (char *)malloc(10240 * sizeof(char));
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;++i){
            if(exist(s,i)==0)
                count++;
        }
        printf("%d\n",count);
    }
    
    return 0;
}
