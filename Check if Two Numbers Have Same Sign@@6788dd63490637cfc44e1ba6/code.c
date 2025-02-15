#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Check sign correctly
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0)) {
        printf("Same Sign");
    } else {
        printf("Different Sign");
    }
    
    return 0;
}
