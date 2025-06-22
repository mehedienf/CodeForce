#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int l;
    int temp;
    int m = 0;
    cin >> l;
    vector<int> a;
    for (int k = 0; k < l; k++)
    {
        m = 0;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i]*a[j] == n-2 && i != j)
                {
                    cout << a[i] << " " << a[j] << endl;
                    m = 1;
                    break;
                }
            }
            if(m == 1) {
                break;
            }
        }
        a.clear();
    }
}