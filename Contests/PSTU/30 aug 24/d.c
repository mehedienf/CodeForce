#include <stdio.h>
int main() {
    long int n;
    int flag;
    scanf("%ld", &n);
        if (n % 2 == 0)
        {
            flag = 0;
        }
        while (n > 1) {
                n = n - 1;
                if (flag == 1) {
                    flag = 0;
                }
                else {
                    flag = 1;
                }
            if (n == 1) {
                break;
            }
        }
        if (flag == 1) {
            printf("Mahmoud\n");
        }
        else {
            printf("Bashar\n");
        }
}