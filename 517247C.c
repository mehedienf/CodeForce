//unsolved
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 1000 && arr[i] > 9)
        {
            if (arr[i] % 100 == 0)
            {
                printf("Shatak.\n");
            }
            else if (arr[i] % 10 == 0)
            {
                printf("Dashak.\n");
            }
            else
            {
                printf("Counterfeit.\n");
            }
        }
        else
        {
            if (arr[i] < 10)
            {
                printf("Ekok.\n");
            }
            else
            {
                printf("Counterfeit.\n");
            }
        }
    }
    return 0;
}