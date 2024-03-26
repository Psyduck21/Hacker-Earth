#include <stdio.h>

int ballon_cost(int n, int arr[10][2], int cost_purple, int cost_green, int sum1, int sum2)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 1)
            sum1 += cost_green;
        if (arr[i][1] == 1)
            sum1 += cost_purple;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 1)
            sum2 += cost_purple;
        if (arr[i][1] == 1)
            sum2 += cost_green;
    }

    return sum1 > sum2 ? sum2 : sum1;
}
void main()
{
    int T, c_purple, c_green, n, arr[10][2], sum1, sum2;
    scanf("%d", &T); // no of test cases
    for (int i = 0; i < T; i++)
    {
        sum1 = sum2 = 0;
        scanf("%d%d", &c_green, &c_purple); // cost of each ballons
        scanf("%d", &n);                    // no of participants
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
                scanf("%d", &arr[i][j]);
        }
        int result = ballon_cost(n, arr, c_purple, c_green, sum1, sum2);
        printf("%d\n", result);
    }
}