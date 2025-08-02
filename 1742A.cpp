#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;

    while (n)
    {
        cin >> a >> b >> c;
        int maximum = max(max(a,b),c);
        if( maximum == a + b + c - maximum) {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
        n--;
    }
}