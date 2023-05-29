//Maximum Product Subarray
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums){
    int ans = nums[0];
    int max1 = nums[0];
    int min1 = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(nums[i]<0){
            swap(max1,min1);
        }
        
        max1 = max(nums[i],nums[i]*max1);
        min1 = min(nums[i],nums[i]*min1);

        ans = max(ans,max1);
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {2,3,-2,4};
     int max_product = maxProduct(nums);
    cout << "The maximum product subarray is: " << max_product << endl;
    return 0;
}
