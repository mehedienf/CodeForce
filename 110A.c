#include <stdio.h>

int main()
{
    int count = 0;
    long long int n;
    scanf("%lld", &n);
    for (int i = 0; n > 0; i++)
    {
        if (n % 10 == 7 || n % 10 == 4)
        {
            count++;
        }
        n = n / 10;
    }
    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}