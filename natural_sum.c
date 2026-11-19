#include<stdio.h>
int sum(int n);
int main(){
    int num=5;
    printf("sum of numbers from 1 to %d is %d\n",num,sum(num));
    return 0;
}
int sum (int n){
    if(n==0) return 0;
    else return n+sum(n-1);
}