#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int OR(char *s1, char *s2, int m){
    int i, k, count=0;
    for(i=0;i<m;++i){
        k = (s1[i]-'0')||(s2[i]-'0');
        if(k)
            count++;
            
    }
    return count;
}

int main(){
    int n, i, j, max=0, t, count=0; 
    int m; 
    scanf("%d %d",&n,&m);
    char* topic[n];
    for(int topic_i = 0; topic_i < n; topic_i++){
       topic[topic_i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",topic[topic_i]);
    }
    
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            t = OR(topic[i], topic[j], m);
            if(max<t){
                max = t;
                count = 1;
            }
            else if(max==t)
                count++;
        }
    }
    
    printf("%d\n%d",max,count);
    return 0;
}
