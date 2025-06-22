#include <stdio.h>

int main()
{
    int n, temp;
    scanf("%d", &n);
    int gift[n], arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &gift[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (gift[j] == i)
            {
                arr[i-1] = j+1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}