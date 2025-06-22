
#include <stdio.h>

int main()
{
    int n, x, l, r, p = 2, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &l, &r);
        p = 2;
        for (int j = p; j <= r; )
        {
            count++;
            j *= 2;
        }
        arr[i] = count;
        count = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}