#include <iostream>

using namespace std;

int main() {
  int t, n, count, mul;

  cin >> t;

  for (int i = 0; i < t; i++) {
    count = 0;
    mul = 1;
    cin >> n;

    int arr[n];

    for (int j = 0; j < n; j++) {
      cin >> arr[j];
      count += arr[j];
    }

    if (n == 1) {
      cout << count << endl;
    } else if (n > 1) {
      for (int k = 0; k < n; k++) {
        for (int l = k + 1; l < n; l++) {
          count += (arr[k] * arr[l]);
        }
      }
      for (int m = 0; m < n; m++) {
        mul *= arr[m];
      }
      cout << count + mul << endl;
    }
  }

  return 0;
}
