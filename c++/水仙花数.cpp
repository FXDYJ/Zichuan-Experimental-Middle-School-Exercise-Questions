#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int num = 100; num <= 999; ++num) {
        int digit1 = num / 100;
        int digit2 = (num / 10) % 10;
        int digit3 = num % 10;
        if (num == digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3) {
            cout << num << endl;
        }
    }

    return 0;
}
