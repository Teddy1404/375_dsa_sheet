//duplicate
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag; 
    }
int main(int argc, char const *argv[])
{
    vector<int> nums = {1,2,3,4,1};
    int ans = containsDuplicate(nums);
    if(ans == 0){
        cout<<"False"<<endl;
    }
    else
    cout<<"true"<<endl;
    return 0;
}
