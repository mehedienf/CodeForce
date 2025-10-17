#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, e;
    vector <int>v;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            v.push_back(e);
        }
        cout << *max_element(v.begin(),v.end()) << endl;
        v.clear();
    }
}