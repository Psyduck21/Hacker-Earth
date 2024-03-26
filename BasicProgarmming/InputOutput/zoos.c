#include <stdio.h>

int main()
{
    char word[20];
    int zCount = 0, oCount = 0;
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'z')
        {
            zCount++;
        }
        else if (word[i] == 'o')
        {
            oCount++;
        }
    }
    if (zCount * 2 == oCount)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
