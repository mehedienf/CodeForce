#include <stdio.h>
int main()
{
    int n, p, v, t, sol = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%d%d%d", &p, &v, &t);
        if (p == 1)
        {
            count += 1;
        }
        if (v == 1)
        {
            count += 1;
        }
        if (t == 1)
        {
            count += 1;
        }
        if (count >= 2)
        {
            sol += 1;
        }
    }
    printf("%d\n", sol);
    return 0;
}
    
    