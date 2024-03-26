#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%[^\n]", s);
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] -= 32;
		else if (s[i] <= 'Z' && s[i] >= 'A')
			s[i] += 32;
	}
	puts(s);
}
