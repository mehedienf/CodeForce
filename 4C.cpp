#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast;
    map<string, int> str;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        str[s]++;
        if (str[s] == 1) {
            cout << "OK" << endl;
        }
        else {
            cout << s << str[s] - 1 << endl;
        }
    }
}