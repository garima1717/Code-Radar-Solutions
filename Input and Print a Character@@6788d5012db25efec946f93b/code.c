#include <stdio.h>
int main();
{
    char ch,extra;
    if(scanf("%c", &ch)==1){
        if((extra=getchar()==\n)){
            printf("you entered: %c",ch);
        }
        else{
            printf("INVALID INPUT`");

        }
    }
}