#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int temp = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i = i + 2)
    {
        for (int j = 0; j < strlen(str); j = j + 2)
        {
            if (str[i] <= str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}