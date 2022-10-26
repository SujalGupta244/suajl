#include<stdio.h>

int palindrome(int n){
    int temp = n,r, sum = 0;
    while(temp>0){
        r = temp%10;
        sum = (sum*10) + r;
        temp /= 10;
        // printf("%d\n",r);
    }
    return sum;
}


int main(){
    int p = palindrome(125);
 
    printf("%d",p);   
}