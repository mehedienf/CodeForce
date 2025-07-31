#include <stdio.h>
#include <string.h>
int main()
{
    int count, c = 0;
    char temp[4];
    scanf("%d\n", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%s", temp);
        if (temp[1] == '+')
        {
            c++;
        }
        else if (temp[1] == '-')
        {
            c--;
        }
    }
    printf("%d\n", c);
    return 0;
}