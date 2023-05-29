//3sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n-2; i++) {
            if (i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            int left = i+1, right = n-1;
            while (left < right) {
                int s = nums[i] + nums[left] + nums[right];
                if (s < 0) {
                    left++;
                } else if (s > 0) {
                    right--;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left-1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right+1]) {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
       Solution solution;
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> result = solution.threeSum(nums);
    for (auto triplet : result) {
        std::cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            std::cout << triplet[i];
            if (i < triplet.size()-1) {
                std::cout << ", ";
            }
        }
        std::cout << "]" << std::endl;
    }
    return 0;
}
