#include <stdio.h>

// Function to compute Fibonacci using recursion
int fibonacciSeries(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main() {
    int n;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++) { // Fixed loop range
        printf("%d ", fibonacciSeries(i)); // Corrected printf syntax
    }

    printf("\n"); // Clean output formatting
    return 0;
}
