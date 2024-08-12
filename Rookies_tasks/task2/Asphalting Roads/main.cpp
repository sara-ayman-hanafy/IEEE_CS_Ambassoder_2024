#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool arr1[51] = {false};
    bool arr2[51] = {false};
    bool workDone[2501] = {false};

    for (int i = 1; i <= n*n; i++) {
        int h, v;
        cin >> h >> v;

        if (arr1[h] == false && arr2[v] == false) {
            arr1[h] = true;
            arr2[v] = true;
            workDone[i] = true;
        }
    }
    bool first = true;
    for (int i = 1; i<= n * n; i++) {
        if (workDone[i]) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
    cout << endl;

    return 0;
}
