#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort(char a[100][100], int i, int j, int n ){
    
    char c=a[i][j];
    while(j-1>=0 && a[i][j-1]>c){
        a[i][j]=a[i][j-1];
        j--;
    }
    
    if(j<0){
        a[i][0]=c;
        return;
    }
    
    a[i][j]=c;
    
}

void insertionSort(char a[100][100], int i, int n){
    
    for(int j=0;j<n;++j){
        sort(a,i,j,n);
    }
    
}

int main() {

    int t,n,i,j,flag;
    scanf("%d\n",&t);
    for(int a0=0;a0<t;++a0){
        flag=0;
        scanf("%d\n",&n);
        char a[100][100];
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
                scanf("%c",&a[i][j]);
            }
            scanf("\n");
        }
        
        for(i=0;i<n;++i){
            insertionSort(a,i,n);
        }
        
        for(i=0;i<n;++i){
            for(j=0;j<n-1;++j){
                if(a[j][i]>a[j+1][i]){
                    //printf("%c %c",a[j][i],a[j+1][i]);
                    printf("NO\n");
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        if(!flag)
            printf("YES\n");
    }
    
    return 0;
}
