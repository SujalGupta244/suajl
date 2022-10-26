#include<stdio.h>

int greatest(int a[],int n){
    int g = 0;
    for(int i =0;i<n;i++){
        if(a[i]>g){
            g = a[i];
        }
    }
    return g;
}




int main(){
    int a[] = {1,5,17,3,9}, n = 5;
    int g = greatest(a,n);
    printf("%d",g);   
}