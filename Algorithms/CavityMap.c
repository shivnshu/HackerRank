#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, i, j; 
    scanf("%d",&n);
    char* grid[n];
    for(int grid_i = 0; grid_i < n; grid_i++){
       grid[grid_i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",grid[grid_i]);
    }
    
    for(i=1;i<n-1;++i){
        for(j=1;j<n-1;++j){
            if(grid[i][j]>grid[i+1][j]&&grid[i][j]>grid[i][j+1]&&grid[i][j]>grid[i-1][j]&&grid[i][j]>grid[i][j-1])
               grid[i][j] = 'X';
        }
    }
    
    for(i=0;i<n;++i){
        printf("%s\n",grid[i]);
    }
    
    return 0;
}