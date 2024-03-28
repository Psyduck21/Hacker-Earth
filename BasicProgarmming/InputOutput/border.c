#include <stdio.h>

void input(int m, int n, char arr[m][n]) {
    for (int i = 0; i < m; i++) {
        scanf(" %s", arr[i]); // Use %s to read a string directly
    }
}

int boader(int m, int n, char arr[m][n]) {
    int row_max = 0;
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '#') {
                row_max++;
            }
        }
        if (count < row_max) {
            count = row_max;
        }
        row_max = 0; // Reset row_max for the next row
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    int m, n, result;
    for (int i = 0; i < T; i++) { // Use < instead of <=
        scanf("%d %d", &m, &n);
        char arr[m][n];
        input(m, n, arr);
        result = boader(m, n, arr);
        printf("%d\n", result);
    }
    return 0;
}
