#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 200; i++)
    {
        if (n % i == 0)
        {
            printf("%d %d\n", i, (n / i));
            break;
        }
    }
}