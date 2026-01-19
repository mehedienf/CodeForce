#include <stdio.h>
#include <string.h>
int main()
{
    int flag = 0;
    char s[101],is[101];
    scanf("%s%s", s, is);
    if (strlen(s) == strlen(is))
    {
        for (size_t i = 0, j = strlen(s)-1; i < strlen(s); i++, j--)
        {
            if (s[i] != is[j])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
    }
    else if (flag == 0)
    {
        printf("NO\n");
    }
    
    return 0;
}
