#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;

        for (int i=0; i<nums.size(); i++)
        {
            for (int j=1+i; j<nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
        }
        return answer;
    }
};

int main() {
    vector<int> nums{ 2, 7, 11, 15 };
    int target = 9;

    Solution solution;

    for (int x : solution.twoSum(nums, target))
        cout << x << " ";

    return 0;
}
