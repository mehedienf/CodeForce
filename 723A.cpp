#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int x;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << ((v[1]-v[0]) + (v[2]-v[1])) << endl;
}