#include <stdio.h>

int main()
{
    int n, d = 0, a = 0;
    scanf("%d", &n);
    char x[n];
    scanf("%s", x);
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 'A')
        {
            a++;
        }
        if (x[i] == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        printf("Anton\n");
    }
    else if (d > a)
    {
        printf("Danik\n");
    }
    else if (a == d)
    {
        printf("Friendship\n");
    }
    return 0;
}