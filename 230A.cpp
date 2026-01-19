//new: vector pair,

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    int x, y;
    cin >> s >> n;
    int count = n;
    int flag = 1;
    
    vector<pair<int, int>>vec;
    
    while (n)
    {
        cin >> x >> y;
        vec.push_back({x, y});
        n--;
    }

    sort(vec.begin(), vec.end());

    for (int i = 0; i < count; i++)
    {
        for (const auto& p : vec)
        {

        }
        
        if (s > vec[i].first)
        {
            s += vec[i].second;
        }
        else
        {
            flag = 0;
            break;
        }
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