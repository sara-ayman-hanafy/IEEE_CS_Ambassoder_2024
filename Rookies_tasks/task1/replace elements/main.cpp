#include <iostream>
#include<vector>

using namespace std;


vector<int>replaceElements(vector<int>& arr) {

    int maxNum = -1;
    for (int i = arr.size()- 1; i >= 0; --i) {
        int current = arr[i];
        arr[i] = maxNum;
        if (current > maxNum) {
            maxNum = current;
        }
    }
return arr;
  }
int main()
{
   int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> result = replaceElements(arr);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
