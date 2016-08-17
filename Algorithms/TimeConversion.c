#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int l;
    char c;
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    l = strlen(time);
    
    
    if(time[l-2] == 'P'){
        if(time[0] != '1' || time[1] != '2'){
        time[0] = time[0] + 1;
        time[1] = time[1] + 2;
        
        }
        time[l-1] = '\0';
        time[l-2] = '\0';
        
    }
    else {
        if(time[0] == '1' && time[1] == '2'){
            time[0] = '0';
            time[1] = '0';
        }
        time[l-1] = '\0';
        time[l-2] = '\0';
    }
    
    printf("%s",time);
    return 0;
}

