#include <stdio.h>
#include <math.h>
int main()
{
    int n, x = 0, y = 0, z = 0, t1, t2, t3, sum;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &t1, &t2, &t3);
        x += t1;
        y += t2;
        z += t3;
    }
    sum = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    if (sum == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}