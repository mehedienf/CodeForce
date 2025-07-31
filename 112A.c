#include <stdio.h>
#include <string.h>
int main()
{
    int num1, num2;
    char str1[100], str2[100], str3[] = "abcdefghijklmnopqrstuvwxyz", str4[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%s", str1);
    scanf("%s", str2);
    for (int i = 0; i < strlen(str1); i++)
    {    
        for (int j = 0; j < 26; j++)
        {
            if (str1[i] == str3[j] || str1[i] == str4[j])
            {
                num1 = j+1;
            }
            if (str2[i] == str3[j] || str2[i] == str4[j])
            {
                num2 = j+1;
            }
        }
        if (num1 != num2)
        {
            break;
        }
    }
    if (num1 > num2)
    {
        printf("1\n");
    }
    else if (num1 < num2)
    {
        printf("-1\n");
    }
    else if (num1 == num2)
    {
        printf("0\n");
    }
    return 0;
}