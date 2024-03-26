#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive calculation for n > 1
    }
}

int main() {
    int num;
    scanf("%d", &num);

    if (num < 0) {
        return 1; // Exit with an error code
    }

    printf("%d", factorial(num));

    return 0; // Exit successfully
}
