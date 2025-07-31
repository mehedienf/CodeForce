#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i] != arr[i-1])
            {
                count++;
            }
        }
        else if (i == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}