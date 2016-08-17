#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,a[26]={0},b[26]={0},count=0;
    char s1[10001],s2[10001];
    scanf("%s\n%s",s1,s2);
    for(i=0;i<strlen(s1);++i){
        a[s1[i]-'a']++;
    }
    for(i=0;i<strlen(s2);++i){
        b[s2[i]-'a']++;
    }
    for(i=0;i<26;++i){
        if(a[i]!=b[i]){
            count += abs(a[i]-b[i]);
        }
    }
    printf("%d",count);
    
    return 0;
}
