#include <iostream>
#include <vector>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        int firstPosition = -1;
    int lastPosition = -1;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            if (firstPosition == -1) {
                firstPosition = i;
            }
            lastPosition = i;
        }
    }

    return {firstPosition, lastPosition};

    }

int main()
{
  int n, target;
    cin >> n;
    vector<int> nums(n);

    for (int i =0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result =searchRange(nums, target);

    cout << result[0] << " " << result[1] <<endl;


    return 0;
}
