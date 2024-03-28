#include <stdio.h>
#define N 10000

int main() {
    int num[N];
    int count = 0;

    // Read integers into the array until encountering 42 or reaching the array size
    while (count < N && scanf("%d", &num[count]) == 1 && num[count] != 42) {
        count++;
    }

    // Print the numbers read until 42 was encountered
    for (int i = 0; i < count; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}
