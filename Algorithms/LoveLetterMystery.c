#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, i, j, l, count;
    char str[10001];
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        count=0;
        scanf("%s\n",str);
        l=strlen(str);
        for(i=0;i<l/2;++i){
            if(str[i]!=str[l-1-i]){
                    count += abs(str[i]-str[l-1-i]);
            }
        }
        printf("%d\n",count);
    }
        
    return 0;
}

