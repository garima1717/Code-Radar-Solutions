#include<stdio.h>
int main(){
    int a,b,c;
    scanf(%d %d %d,&a,&b,&c);
    if(a>0&&b>0&&c>0&&(a+b>c)&&(b+c>a)&&(a+c>b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}