#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find(int i, char s[]){
    int l=strlen(s);
    for(int j=0;j<l;++j){
        if(s[j]==('a'+i))
            return 1;
    }
    return 0;
}

int main() {

    int t,i,j,l,flag=0;
    char s1[100001],s2[100001];
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        flag=0;
        scanf("%s\n%s\n",s1,s2);
        for(i=0;i<26;++i){
            if(find(i,s1)&&find(i,s2)){
                printf("YES\n");
                flag=1;
                break;
            }
        }
        if(flag)
            continue;
        printf("NO\n");
    }
    
    return 0;
}
