#include <stdio.h>

int main()
{
    int y, arr[4], temp, count = 0;
    scanf("%d", &y);
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = y + 1; ; i++)
    {
        temp = i;
        for (int j = 0; j < 1; j++)
        {
            for (int m = 0; temp > 0; m++)
            {
                arr[m] = temp % 10;
                temp = temp / 10;
            }
        }
        for (int n = 0; n < 1; n++)
        {
            for (int k = 0; k < size; k++)
            {
                for (int l = 0; l < size; l++)
                {
                    if (arr[k] != arr[l] && l != k)
                    {
                        count++;
                    }
                }
            }
        }
        if (count == 12)
        {
            printf("%d\n", i);
            break;
        }
        count = 0;
    }
    return 0;
}