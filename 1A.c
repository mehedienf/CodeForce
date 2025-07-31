#include <stdio.h>

int main()
{
    int n, m, a, count = 0;
    scanf("%d %d %d", &n, &m, &a);
    if (n % a == 0)
    {
        n = n/a;
    }
    else
    {
        n = (n/a) + 1;
    }
    if (m % a == 0)
    {
        m = m/a;
    }
    else
    {
        m = (m/a) + 1;
    }
    printf("%lld\n", ((long long int)n * (long long int)m));
    return 0;
}