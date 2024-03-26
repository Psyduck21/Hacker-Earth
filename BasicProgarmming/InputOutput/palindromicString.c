#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int len = strlen(str) - 1;
    int s = 0;
    while (s < len)
    {
        if (str[s] != str[len])
        {
            return 0;
        }
        s++;
        len--;
    }
    return 1;
}

int main()
{
    char str[100]; // Assuming maximum string length is 100
    scanf("%s", str);

    if (isPalindrome(str))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
