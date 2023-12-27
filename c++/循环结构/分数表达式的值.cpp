#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
    }

    cout << setprecision(5) << sum << endl;

    return 0;
}
