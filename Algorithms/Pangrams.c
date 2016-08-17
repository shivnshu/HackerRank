#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001], c;
    int l=0, a[26]={0};
    while((c=getchar())!=EOF){
        str[l]=c;
        if(c>='a' && c<='z')
            a[c-'a'] = 1;
        else if(c>='A' && c<='Z')
            a[c-'A'] = 1;
        ++l;
    }
    str[l] = '\0';
    
    for(int i=0;i<26;++i){
        if(a[i]==0){
            printf("not pangram");
            return 0;
        }
    }
    printf("pangram");
    return 0;
}

