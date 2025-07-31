#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matrix[5][5], ans;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d ", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                ans = abs(3 - i) + abs(3 - j);
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}