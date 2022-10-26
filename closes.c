#include<stdio.h>


int closest(int a[],int n,int t){
    int c = 0;
    for(int i = 0;i<n;i++){
        if(c<a[i] && a[i]<=t){
            c = a[i];
        }
        // printf("%d\n",c);
    }
    return c;
}




int main(){
    int a[] = {1,2,4,5,6,6,8,9}, n = 8, t = 11;
    int c = closest(a,n,t);
    printf("%d",c);   
}