#include<stdio.h>
int main()
{
    int age;
    char name[10],hobby[20];
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
    
}