#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
    int count=0;
    int flag = 0;
    int a[26]={0};
    for(int i=0;i<strlen(arr);++i){
        a[arr[i]-'a']++;
    }
    for(int i=0;i<26;++i){
        count += (a[i]%2);
    }
    if((strlen(arr)%2)!=count)
        flag=1;
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
