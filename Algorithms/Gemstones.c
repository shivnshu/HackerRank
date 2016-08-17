#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int notbefore(int i, char str[]){
    for(int j=0;j<i;++j){
        if(str[i]==str[j])
            return 0;
    }
    return 1;
}

int main() {
    int n, a[26]={0}, count=0;
    char str[101];
    scanf("%d\n",&n);
    for(int a0=0;a0<n;++a0){
        scanf("%s",str);
        for(int i=0;i<strlen(str);++i){
            if(notbefore(i,str))
                a[str[i]-'a']++;
        }
    }
    
    for(int i=0;i<26;++i){
        if(a[i]==n)
            count++;
    }
    printf("%d",count);
    return 0;
}
