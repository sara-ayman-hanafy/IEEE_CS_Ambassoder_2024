#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  //number of days
    int previous = 0, current = 0;
    int last_a = 0, last_b = 0;

    //reading the size of the moon
    for (int i = 0; i < n; ++i){
        cin >> current;
        if (i>0) {
            last_a = previous;
            last_b = current;
        }
    previous = current;
    }

    if (last_b>last_a) {
        cout << "UP" << endl;
    } else if (last_b < last_a) {
        cout << "DOWN" << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
