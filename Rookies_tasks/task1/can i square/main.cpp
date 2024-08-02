#include <iostream>
#include <cmath>
using namespace std;


bool isSquare(long long x) {
    if (x < 0) return false;
    long long s = static_cast<long long>(sqrt(x));
    return s * s == x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long totalSquares = 0;
        for (int i = 0; i < n; ++i) {
            long long a;
            cin >> a;
            totalSquares += a;
        }

        if (isSquare(totalSquares)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
