#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    fast;
    map<int, int> num;
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        num[input]++; 
    }
    total += num[4];
    num[4] = 0;
    if (num[3] == num[1]) {
        total += num[3];
        num[3] = 0;
        num[1] = 0;
    }
    else if(num[1] > num[3]) {
        total += num[3];
        num[1] -= num[3];
        num[3] = 0;
    }
    else {
        total += num[1];
        num[3] -= num[1];
        num[1] = 0;
    }
    num[2] += num[1]/2;
    num[1] %= 2;
    if (num[2] % 2 == 0) {
        total += num[2]/2;
        num[2] = 0;
    }
    else {
        total += num[2]/2;
        num[2] = 1;
    }
    if (num[1] == 1 || num[2] == 1) {
        total++;
        num[1] = 0;
        num[2] = 0;
    }
    total += num[1] + num[2] + num[3] + num[4];
    cout << total << endl;
}