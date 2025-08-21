#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n, m;
    string s, a, b, c, temp;

    while (t)
    {
        temp.clear();
        s.clear();

        cin >> n;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;
        s = a;

        for (int i = 0; i < m; i++)
        {
            if(c[i] == 'D')
            {
                s += b[i];
            }
            else
            {
                temp += b[i];
            }
        }
        reverse(temp.begin(), temp.end());
        temp += s;
        cout << temp << endl;
        t--;
    }
}