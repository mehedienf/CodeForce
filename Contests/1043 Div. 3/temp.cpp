#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> res;
        for (int k = 1; ; ++k) {
            long long d = 1;
            for (int i = 0; i < k; ++i) d *= 10;
            long long denom = 1 + d;
            if (denom > n) break; // No need to check further
            if (n % denom == 0) {
                res.push_back(n / denom);
            }
        }
        if (res.empty()) {
            cout << "0\n";
        } else {
            cout << res.size() << "\n";
            for (auto x : res) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}