#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;

    vector<int> vec;

    int temp;
    int min;
    int np = m;

    while (m)
    {
        cin >> temp;
        vec.push_back(temp);
        m--;
    }
    sort(vec.begin(), vec.end());
    int result = vec[n-1] - vec[0];

    for (int i = 0; i <= np - n; i++)
    {
        if (result > vec[i+n-1] - vec[i])
        {
            result = vec[i+n-1] - vec[i];
        }
    }
    
    cout << result << endl;
}