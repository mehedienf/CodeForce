#include <stdio.h>
#include <string.h>

int main()
{
    int t, l, r, count, n, q, u, cnt = 0, temp;
    char x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &q);
        char str[n];
        scanf("%s", str);
        for (int j = 0; j < q; j++)
        {
            count = 0 , cnt = 0;
            scanf("%d %d %c", &l, &r, &x);
            u = r;
            temp = l-1;
            for (int k = 0; k < r-l-1;)
            {
                for (int m = temp; m < n; m++)
                {
                    if (x == str[m])
                    {
                        count++;
                    } 
                    k++;
                }
                temp = 0;
                if (u < n)
                {
                    n = u;
                }
                else
                {
                    u -= n;
                }
                
            }
            printf("%d\n", count);
        }
        
    }
    return 0;
}