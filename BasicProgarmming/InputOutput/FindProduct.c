#include <stdio.h>
#include <math.h>
#define max 1000
#define mod 1000000007
int main()
{
    int n;
    long long int answer = 1;
    scanf("%d", &n);
    int num[max];
    for (int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < n; i++)
    {
        answer = (answer * num[i]) % mod;
    }
    printf("%lld", answer);
}
