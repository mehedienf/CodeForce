#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int recruited = 0, untreated = 0;

    while (n)
    {
        int temp;
        cin >> temp;
        if (temp == -1 && recruited == 0)
        {
            untreated++;
        }
        else if (temp == -1 && recruited > 0)
        {
            recruited--;
        }
        else
        {
            recruited += temp;
        }
        n--;
    }
    cout << untreated << endl;
}