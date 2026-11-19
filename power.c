#include<stdio.h>

 int power(int base ,int exp);
int main(){
    int base , exp;
    printf("enter base");
    scanf("%d" ,&base);
     printf("enter power");
    scanf("%d" ,&power);
    printf("power=%d",power(base,exp));
    


    
    return 0;
}
int power(int base , int exp){
    if(exp==0){
        return 1;
    }
    else {
        return base*power(base,exp-1);
    }
}
