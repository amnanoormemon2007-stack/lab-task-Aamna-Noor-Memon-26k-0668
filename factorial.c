#include<stdio.h>
int fact(int n);
int main(){
    int num =5;
    printf("Factorial of 5 %d is %d\n",num,fact(num));
    return 0;
}
int fact(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

