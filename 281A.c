#include <stdio.h>

int main()
{
    char str[1000], small[] = "abcdefghijklmnopqrstuvwxyz", capitall[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%s", str);
    for (int i = 0; i < 27; i++)
    {
        if (str[0] == small[i])
        {
            str[0] = capitall[i];
            break;
        }
    }
    printf("%s\n", str);
    return 0;
}