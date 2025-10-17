#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s, rev;
    string sub = "01";
    int n, cnt;
    while (t--)
    {
        cin >> n;
        cin >> s;
        cnt = count(s.begin(), s.end(), '0');
        cout << cnt <<endl;
        for (int i = 0; i < n; i++)
        {
            if(s.at(i) == '0')
            {
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
}