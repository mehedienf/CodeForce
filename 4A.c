#include <stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && w > 2 )
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}