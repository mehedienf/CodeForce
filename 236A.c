#include <stdio.h>
#include <string.h>

int main()
{
    int l, count;
    char name[100];
    scanf("%s", name);
    l = strlen(name);
    count = strlen(name);
    for (int i = 0; i < l; i++)
    {
        for (int j = i; j < l; j++)
        {
            if (name[i] == name[j] && i != j)
            {
                count--;
                break;
            }
        }
    }
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}