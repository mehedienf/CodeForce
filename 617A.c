#include <stdio.h>
int main()
{
    int x, rem = 0, count = 0;;
    scanf("%d", &x);

    for (int i = 0; x != 0; i++)
    {
        if (x / 5 > 0)
        {
            count += (x/5);
            x = x % 5;
        }
        else if (x / 4 > 0)
        {
            count += (x/4);
            x = x % 4;
        }
        else if (x / 3 > 0)
        {
            count += (x/3);
            x = x % 3;
        }
        else if (x / 2 > 0)
        {
            count += (x/2);
            x = x % 2;
        }
        else if (x / 1 > 0)
        {
            count += (x/1);
            x = x % 1;
        }
    }
    printf("%d\n", count);
    return 0;
}