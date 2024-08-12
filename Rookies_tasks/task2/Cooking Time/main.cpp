#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int ingredients[100000];
        for (int i = 0; i < n; ++i) {
            cin >> ingredients[i];
        }

        bool outside[1000000] = {false};
        int outsideCount = 0;
        int openCount = 0;

        for (int i = 0; i < n; ++i) {
            if (!outside[ingredients[i]]) {
                if (outsideCount == k) {
                    for (int j = i - 1; j >= 0; --j) {
                        if (outside[ingredients[j]]) {
                            outside[ingredients[j]] = false;
                            outsideCount--;
                            break;
                        }
                    }
                }
                outside[ingredients[i]] = true;
                outsideCount++;
                openCount++;
            }
        }

        cout << openCount;
        if (T > 0) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}
