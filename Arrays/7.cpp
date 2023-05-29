#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    
    // Find the first decreasing element from the right
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i+1]) {
        i--;
    }
    
    // If there is no decreasing element, reverse the whole array
    if (i < 0) {
        reverse(nums.begin(), nums.end());
        return;
    }
    
    // Find the smallest element greater than nums[i] from the right
    int j = n - 1;
    while (j > i && nums[j] <= nums[i]) {
        j--;
    }
    
    // Swap nums[i] and nums[j]
    swap(nums[i], nums[j]);
    
    // Reverse the subarray to the right of i
    reverse(nums.begin() + i + 1, nums.end());
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
