#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, l, flag=0;
    char str[10001];
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        flag = 0;
        scanf("%s\n",str);
        l = strlen(str);
        for(int i=1;i<l;++i){
            if(abs(str[i]-str[i-1])!=abs(str[l-i]-str[l-1-i])){
                printf("Not Funny\n");
                flag=1;
                break;
            }
            
        }
        if(flag)
                continue;
        printf("Funny\n");
    }
    
    return 0;
}

