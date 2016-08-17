#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void quickSort(int *luck, int *imp, int l, int r){
    
    if(r-l<1)
        return;
    
    int i=l,j,p=luck[r],t;
    for(j=l;j<r;++j){
        if(luck[j]<=p){
            t=luck[i];
            luck[i]=luck[j];
            luck[j]=t;
            t=imp[i];
            imp[i]=imp[j];
            imp[j]=t;
                i++;
        }
    }
    
    luck[r]=luck[i];
    luck[i]=p;
    t=imp[r];
    imp[r]=imp[i];
    imp[i]=t;
    
    quickSort(luck,imp,l,i-1);
    quickSort(luck,imp,i,r);
    
}

int main() {

    int n,k,i,sum=0;
    scanf("%d%d",&n,&k);
    int L[n], T[n];
    for(i=0;i<n;i++){
        scanf("%d%d",&L[i],&T[i]);
    }
    
    quickSort(L,T,0,n-1);
    
    for(i=n-1;i>=0;--i){
        if(T[i]==0||k>0){
            if(!T[i])
                sum += L[i];
            else{
                sum+=L[i];
                k--;
            }
        }
        else
            sum -= L[i];
    }
        
    printf("%d",sum);
    return 0;
    
}
