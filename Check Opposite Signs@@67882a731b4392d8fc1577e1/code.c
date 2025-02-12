#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("True",a>0&&b<0);
    printf("False",a>0&&b>0);
    return 0;
}