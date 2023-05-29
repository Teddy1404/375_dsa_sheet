// Find Minimum in Rotated Sorted Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int  findMin(vector<int>& nums){
int  n = nums.size()-1;
int s = 0 , e = n-1;
while (s<=e)
{
    int mid = s + (e-s)/2;
    if(nums[mid]<nums[mid-1]){
        return nums[mid];
    }
    else if(nums[mid] >= nums[s] && nums[mid]>nums[e]){
        s = mid +1;
    }
    else{
        e = mid - 1;
    }
    return -1;
}

}
int main(int argc, char const *argv[])
{
    vector<int> nums ={3,4,5,1,2};
    int ans = findMin(nums);
    cout<<ans;
    
    return 0;
}
