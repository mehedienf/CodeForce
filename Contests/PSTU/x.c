#include <stdio.h>

int main()
{
    int t, n, count = 0, mul = 1;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++)
    {
        count = 0;
        mul =1;
        scanf("%d", &n);
        int arr[n];
        
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            count += arr[j];

        }
        if (n == 1)
        {
            printf("%d\n", count);
        }
        else if (n == 2)
        {
            printf("%d\n", ((arr[0]*arr[1])+arr[0]+arr[1]));
        }
        else if (n > 1)
        {
            for (int k = 0; k < n-1; k++)
            {
                for (int l = k+1; l < n; l++)
                {
                    count += (arr[k] * arr[l]);
                }
            }
            for (int m = 0; m < n; m++)
            {
            mul *= arr[m];
            }
            printf("%d\n", count+mul);
        }
    }
    return 0;
}