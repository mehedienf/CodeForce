#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> num;
    int count = 0;
    int multi = 1;
    int mod = 10;
    int k;
    for (int i = 0; i < n; i++)
    {
        // int k;
        cin >> k;
        for (int j = 0; k > 0; j++)  //10076
        {
            if (k % mod != 0) // 10
            {
                num.push_back(k % mod); // 6, 70
                k -= (k % mod); // k = 10070, k = 10000
                count++; //count = 1, 2
                if (k / mod == 1) {
                    num.push_back(k);
                    count++;
                    break;
                }
            }
            else {
                // multi *= 10;
                mod *= 10; //mod = 100
            }
        }
        cout << count << endl;
        for(int i = num.size()-1; i >= 0; i--) {
            if (i != 0) {
                cout << num[i] <<" ";
            }
            else {
                cout << num[i];
            }
        }
        cout << endl;
        count = 0;
        multi = 1;
        mod = 10;
        num.clear(); 
    }
    
}