#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0, temp, temp2 = 0, count = 0;
    char s1[] = "hello", s2[101];
    scanf("%s", s2);

    for (int i = 0; i < strlen(s2); i++)
    {
            if (s2[i] == 'h')
            {
                temp = i;
                break;
            }
    }

    for (int i = 0; i < strlen(s2); i++)
    {
        flag = 0;
        for (int j = temp, l = temp2; j < strlen(s2); j++)
        {
            if (s1[l] == s2[j])
            {
                flag = 1;
                temp2 = l+1;
                temp = j+1;
                break;
            }
        }
        // temp2 = l;
        if (flag == 1)
        {
            count++;
        }
        if (count == 5)
        {
            break;
        } 
    }
    if (count == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}