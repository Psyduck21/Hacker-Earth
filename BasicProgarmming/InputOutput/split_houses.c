#include <stdio.h>
#include <string.h>

int main()
{
    char village[21]; // Assuming maximum village size is 100

    int n, flag;
    scanf("%d", &n);
    scanf("%s", village);

    // Count the number of houses ('H') and blank spaces ('.')
    for (int i = 0; i < n; i++)
    {
        if (village[i] == 'H' && village[i + 1] == 'H')
        {
            printf("NO\n");
            return 0;
        }
        flag = 1;
    }
    // Check if it's possible to divide the village into several pieces
    if (flag)
    {
        printf("YES\n");
        // Place fences ('B') in the optimal positions
        for (int i = 0; i < n; i++)
        {
            if (village[i] == '.')
            {
                printf("B");
            }
            else
            {
                printf("%c", village[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
