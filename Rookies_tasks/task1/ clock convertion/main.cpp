#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time;
        cin >> time;
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));

        string period;

        if (hours == 0) {
            hours = 12;
            period = "AM";
        } else if (hours == 12) {
            period = "PM";
        } else if (hours > 12) {
            hours -= 12;
            period = "PM";
        } else {
            period = "AM";
        }


        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << " "
             << period << endl;
    }

    return 0;
}
