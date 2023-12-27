#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 1) {
            sum += 1.0 / i;
        } else {
            sum -= 1.0 / i;
        }
    }

    cout << setprecision(4) << sum << endl;

    return 0;
}

