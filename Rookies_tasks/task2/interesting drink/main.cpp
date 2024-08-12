#include <iostream>
#include <algorithm> // sort
using namespace std;

int main() {
    int n;
    cin >> n;
    int shops[n];

    //Read shop prices
    for (int i = 0; i < n; i++) {
        cin >> shops[i];
    }

    //sort the prices
    sort(shops, shops + n);

    int q;
    cin >> q;
    int m[q];

    //read the budget for each day
    for (int i = 0; i < q; i++) {
        cin >> m[i];
    }


    for (int i = 0; i < q; i++) {
        int mi = m[i];

        //binary search
        int l = 0, h = n - 1;
        int counter = 0;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (shops[mid] <= mi) {
                counter = mid + 1; //all shops up to mid are affordable
                l = mid + 1;     //search to the right
            } else {
                h =mid-1;     //search to the left
            }
        }

        cout << counter << endl;
    }

    return 0;
}
