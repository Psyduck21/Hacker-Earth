#include <stdio.h>

int isDivisible(int arr[],int n, int divisor) {
    int newNumber = 0;

    for (int i = 0; i < n; i++) {
        int lastDigit = arr[i] % 10;
        newNumber = newNumber * 10 + lastDigit;
    }

    if (newNumber % divisor == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n, divisor=10;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isDivisible(arr, n, divisor)) {
        printf("Yes");
    } else {
       printf("No");
    }

    return 0;
}
