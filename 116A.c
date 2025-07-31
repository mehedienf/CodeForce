#include <stdio.h>

int main()
{
    int max = 0, n, enter,temp = 0, exit;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &exit, &enter);
        temp += enter - exit;
        if (temp > max)
        {
            max = temp;
        }
    }
    printf("%d\n", max);
    return 0;
}