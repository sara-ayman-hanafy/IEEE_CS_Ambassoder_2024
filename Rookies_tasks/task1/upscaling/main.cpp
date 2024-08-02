#include <iostream>
using namespace std;

void printBoard(int n) {
    int size = 2 * n;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((i / 2 + j / 2) % 2 == 0) {
                cout << '#';
            } else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    bool first = true;

    while (t--) {
        int n;
        cin >> n;


        first = false;

        printBoard(n);
    }

    return 0;
}
