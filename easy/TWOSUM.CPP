#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 1; j < nums.size(); j++) {
                int sum = nums[i] + nums[j];
                if (sum == target) {
                    output.push_back(i);
                    output.push_back(j);
                    return output;
                }
            }
        }
        return output;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 5, 5, 11};
    int target = 10;

    vector<int> result = sol.twoSum(nums, target);

    cout << "{ ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << "}" << endl;

    return 0;
}
