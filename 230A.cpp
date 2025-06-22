#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    int x1, x2;
    cin >> s >> n;
    int flag = 1;

    int x[n*2];

    while (n)
    {
        cin >> x1 >> x2;
        if (s > x1)
        {
            s += x2;
        }
        else
        {
            flag = 0;
            break;
        }
        n--;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}