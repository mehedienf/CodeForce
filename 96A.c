#include <stdio.h>
#include <string.h>
int main()
{
    int count = 1;
    char s[101];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == s[i+1])
        {
            count++;
            if (count == 7)
            {
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    if (count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}