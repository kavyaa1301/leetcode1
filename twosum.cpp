INPUT
#include <iostream>
class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;

    for (int i = 0; i < nums.size(); ++i) {
      if (const auto it = numToIndex.find(target - nums[i]);
          it != numToIndex.cend())
        return {it->second, i};
      numToIndex[nums[i]] = i;
    }

    throw;
  }
};

OUTPUT
Accepted 

CASE 1
Input 
nums = [2,7,11,15]
target = 9
Output = [0,1]
Expected = [0,1]

CASE 2
Input
nums = [3,2,4]
target = 6
Output = [1,2]
Expected = [1,2]

CASE 3 
Input
nums = [3,3]
target = 6
Output = [0,1]
Expected = [0,1]
