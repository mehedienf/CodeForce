#include <iostream>
using namespace std;

int main()
{
    int a, b;
    bool flag, flag2;
    cin >> a >> b;

    flag2 = false;
    for (int i = a; i <= b; i++)
    {
        flag = false;
        int temp = i;

        while (temp > 0)
        {
            if (temp % 10 == 4 || temp % 10 == 7)
            {
                flag = true;
                temp /= 10;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << i << " ";
            flag2 = true;
        }
    }
    if (flag2 == false)
    {
        cout << -1 << endl;
    }
    return 0;
}