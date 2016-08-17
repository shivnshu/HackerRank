#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t, count;
    char str[100001];
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        scanf("%s",str);
        count = 0;
        for(int i=0;i<strlen(str)-1;++i){
            if(str[i]==str[i+1])
                count++;
        }
        printf("%d\n",count);
    }
    
    return 0;
}
