#include <stdio.h>
#include <string.h>

int main()
{
    int lcc = 0, ucc = 0;
    char s[100], lc[] = "abcdefghijklmnopqrstuvwxyz", uc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 27; j++)
        {
            if (s[i] == lc[j])
            {
                lcc += 1;
            }
            else if (s[i] == uc[j])
            {
                ucc += 1;
            }            
        }
    }
    if (ucc > lcc)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            for (int j = 0; j < 27; j++)
            {
                if (s[i] == lc[j])
                {
                    s[i] = uc[j];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < strlen(s); i++)
        {
            for (int j = 0; j < 27; j++)
            {
                if (s[i] == uc[j])
                {
                    s[i] = lc[j];
                }
            }
        }
    }
    printf("%s\n", s);
    return 0;
}