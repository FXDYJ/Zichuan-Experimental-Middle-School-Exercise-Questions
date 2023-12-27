#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    long long result = 1;
    for (int i = 0; i < n; ++i) {
        result *= a;
    }

    cout << result << endl;

    return 0;
}
