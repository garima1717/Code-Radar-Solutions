#include<stdio.h>
int main(){
    int num1,num2,bit;
    scanf("%d %d",&num1,&num2);
    bit=(num1>>num2)&1;
    printf("%d",bit);
    return 0;
}