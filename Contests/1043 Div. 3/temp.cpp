#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t) {
        ll n;
        cin >> n;
        vector<ll> powers;
        ll x = 0, temp = n;
        // Find powers of 3 needed (base-3 representation)
        while (temp > 0) {
            powers.push_back(temp % 3);
            temp /= 3;
        }
        ll cost = 0;
        for (ll i = 0; i < powers.size(); ++i) {
            for (ll j = 0; j < powers[i]; ++j) {
                // If digit is 1 or 2, we need 1 or 2 deals of size 3^i
                ll deal_size = 1;
                for (ll k = 0; k < i; ++k) deal_size *= 3;
                // Cost formula: 3^(i+1) + i * 3^(i-1)
                ll deal_cost = deal_size * 3 + (i == 0 ? 0 : i * (deal_size / 3));
                cost += deal_cost;
            }
        }
        cout << cost << endl;
        t--;
    }
    return 0;
}