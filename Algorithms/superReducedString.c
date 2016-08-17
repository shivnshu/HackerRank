#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int next(int i, char *str){
    while(str[i+1]==0)
        ++i;
    return i+1;
}

int main() {

    char str[101];
    int l, i, flag=1;
    scanf("%s",str);
    l = strlen(str);
    while(flag){
        flag = 0;
        for(i=0;i<l-1;++i){
            if(str[i] == str[next(i,str)]){
                str[i] = 0;
                str[next(i,str)] = 0;
                ++i;
                flag = 1;
            }
       }
    }
    flag=0;
    for(i=0;i<l;++i){
        if(str[i]!=0){
            flag = 1;
            printf("%c",str[i]);
        }
    }
    if(!flag)
        printf("Empty String");
    return 0;
}
