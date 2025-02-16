#include <stdio.h>

int main() {
    int a, b;
    char oper;
    // Fixing input issue by adding space before %c
    scanf("%d %d %c", &a, &b, &oper);

    // Switch case for operations
    switch (oper) {
        case '+':
            printf("%d", a + b);
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0)
                printf("%d",a / b); // Convert to float for division
            else
                printf("error");
            break;
        default:
            printf("error");
    }

    return 0;
}
