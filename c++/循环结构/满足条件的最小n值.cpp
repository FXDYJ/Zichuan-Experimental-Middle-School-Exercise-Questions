#include <bits/stdc++.h>

using namespace std;

int main() {
    double sum = 0.0;
    int n = 1;

    while (sum <= 10) {
        sum += 1.0 / n;
        n++;
    }

    cout << n - 1 << endl;

    return 0;
}

