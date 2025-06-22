#include <stdio.h>

int main()
{
    int n, x, flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x == 1)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
    return 0;
}