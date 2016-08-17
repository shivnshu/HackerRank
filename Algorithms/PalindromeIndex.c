#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int check(int i, int j, char *str){
    int l=strlen(str);
    int p, q;
    for(;i<=j;++i,--j){
        if(str[i]!=str[j])
            return 0;
    }
    return 1;
}

int main() {

    int t, i, l, index=-1, j, flag;
    char str[100006];
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        flag=0;
        index = -1;
        scanf("%s\n",str);
        l=strlen(str);
        for(i=0,j=l-1;i<=j;++i,--j){
                if(str[i]!=str[j]){
                    if(check(i+1,j,str)){
                        index = i;
                        
                    }
                    else if(check(i,j-1,str)){
                        index = j;
                        
                    }
                    else{
                        index  = -1;
                    }
                    break;
                }
        }
        
        printf("%d\n",index);
    }
        
    return 0;
}
