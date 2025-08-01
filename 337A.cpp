// #include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> num;
    int n;
    cin >> n;
    int m;
    cin >> m;
    int temp;
    int min;
    int max;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        num.push_back(temp);
        if (i == 0) {
            min = num[0];
            max = num[0];
        }
        if (i < n) {
            if (num.at(i) < min) {
                min = num.at(i);
            }
            else if(num.at(i) > max) {
                max = num.at(i);
            }
        }
    }
    cout << max - min << endl;
}

// max_element(num.begin(), n) - *min_element(num.begin(), n)