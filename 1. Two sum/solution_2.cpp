#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> answer(2);
        map<int, int> myMap;

        for (int i=0; i<nums.size(); i++)
        {
            myMap[nums[i]] = i;    // saving index to value in map
        }

        for (int i=0; i<nums.size(); i++)
        {
            int comp = target - nums[i];
            // If 7 exists and the value 7 is not itself, found answer
            if (myMap[comp] && myMap[comp] != i)
            {
                answer[0] = i;     // index
                answer[1] = myMap[comp];
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
