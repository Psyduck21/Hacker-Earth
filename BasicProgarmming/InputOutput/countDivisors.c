#include <stdio.h>

int main()
{
    int l, r, k, count = 0;
    scanf("%d %d %d", &l, &r, &k);
    if ((r <= 1000 && r >= 1) && (l >= 1 && l <= 1000))
    {
        for (int i = l; i <= r; i++)
        {
            if (i % k == 0)
                count++;
        }
    }
    printf("%d", count);
}
