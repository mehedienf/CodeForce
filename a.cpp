#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast
    int n;
    int l;
    cin >> l;
    for (int k = 0; k < l; k++)
    {
        cin >> n;
        int a[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (a[i] == a[j] && i != j)
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
    }
}
