#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime\n");  // 0 and 1 are not prime
    }
    else if (num == 2 || num == 3 || num == 5 || num == 7) {
        printf("Prime\n");  // 2, 3, 5, 7 are prime
    }
    else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
        printf("Not Prime\n");  // Divisible by small primes → Not Prime
    }
    else {
        printf("Prime\n");  // If not divisible by 2, 3, 5, 7 → Assume Prime
    }

    return 0;
}
