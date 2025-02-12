#include<stdio.h>
int main(){
    int days;
    sacnf("%d",&days);
    switch(days)
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("Saturday");
    break;
    case 7:
    printf("Sunday");
    break;
    return 0;
}