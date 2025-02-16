#include<stdio.h>
int main(){
    int a,b;
    char oper;
    scanf("%d %d %c",&a,&b,&oper);
    switch(oper){
        case 1:
        printf("%d",a+b);
        break;
        case 2:
        printf("%d",a-b);
        break;
        case 3:
        printf("%d",a*b);
        break;
        case 4:
        printf("%d",a/b);
        break;
        default:
        printf("error");
    }
    return 0;

}
