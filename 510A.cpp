#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int flag = 1;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (flag == 1)
                {
                    // cout << "N";
                    if (j == b - 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                    // flag = 1;
                }
                else
                {
                    // cout << "M";
                    if (j == 0)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                    // flag = 0;
                }
            }
        }
        // cout << flag;
        if (i % 2 != 0)
        {
            if (flag == 1)
            {
                flag = 0;
            }
            else
            {
                flag = 1;
            }
        }
        cout << endl;
    }
}