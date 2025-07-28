# leetcode1 

Problem Statement :
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.


Solution Overview :
This C++ solution efficiently finds two numbers in an array that sum up to a target value using a hash map for optimal performance.

Solution Code

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numToIndex;

        for (int i = 0; i < nums.size(); ++i) {
            if (const auto it = numToIndex.find(target - nums[i]);
                it != numToIndex.end())
                return {it->second, i};
            numToIndex[nums[i]] = i;
        }

        throw; // In case no solution found (problem guarantees one exists)
    }
};


Approach :

1.Hash Map Storage: Uses an unordered_map to store numbers and their indices

2.Single Pass: Checks for complement (target - current number) in the map while iterating

3.Immediate Return: Returns indices as soon as a valid pair is found

4.Efficiency: Achieves O(n) time complexity with O(n) space complexity


Complexity Analysis
Time Complexity: O(n) - Single pass through the array

Space Complexity: O(n) - Stores up to n elements in the hash map




Key Features
Optimal Performance: Uses hash map for O(1) average case lookups

Clean Modern C++: Utilizes structured binding and const auto

Single Pass: More efficient than nested loop solutions

Exception Handling: Includes throw for completeness (problem guarantees solution exists)

Edge Cases Handled
- Duplicate numbers (when they form the solution)
- Negative numbers in input
- Zero as part of the solution
- Large input sizes (efficient scaling)

How to Extend
This solution can be adapted for:
- Returning all possible pairs instead of just one
- ThreeSum or NSum problems
- Different data types (floats, doubles)
- Custom comparison criteria

