#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    int n;
    cin >> n;
    optimize()
    // vector<pair<int, int> > even;
    // vector<pair<int, int> > odd;

    // for (int i = 0; i < n; i++)
    // {
    //     int p;
    //     cin >> p;
    // if (p % 2 == 0)
    //     {
    //         even.push_back(make_pair(p, i)); // Use make_pair to add the pair
    //     }
    //     else
    //     {
    //         odd.push_back(make_pair(p, i)); // Use make_pair to add the pair
    //     }
    // }

    // if (even.size()>odd.size())
    // {
    //     cout << odd[0].second+1 << endl;
    // }
    // else
    // {
    //     cout<< even[0].second+1 << endl;
    // }
    int arr[n];
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (odd > even)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 == 0)
            {
                cout<<i+1<<endl;
                break;
            }
        } 
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 != 0)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}