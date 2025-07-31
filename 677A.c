#include <stdio.h>

int main()
{
    int n, h, count = 0;;
    scanf("%d %d", &n, &h);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > h)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}