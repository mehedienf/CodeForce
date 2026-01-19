#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int k = 0;
    char str1[100], str2[200], str3[] = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
    scanf("%s", str1);
    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = 0; j < strlen(str3); j++)
        {
            if (str1[i] == str3[j])
            {
                str2[k] = '.';
                str2[k+1] = tolower(str3[j]);
                k += 2;
                break;
            }
        }
    }
    str2[k] = '\0';
    printf("%s\n", str2);
    return 0;
}