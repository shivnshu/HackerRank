#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    for(int i=0;i<n;++i){
        if(s[i]>='a'&&s[i]<='z'){
            s[i] = 'a' + (s[i]-'a'+k)%26;
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            s[i] = 'A' + (s[i]-'A'+k)%26;
        }
    }
    printf("%s",s);
    
    return 0;
}
