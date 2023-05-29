//Find if there is a pair with a given sum in the rotated sorted Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool findPair(vector<int> nums , int sum){
    bool flag = false;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = i+1; j<n; j++)
        {
            /* code */
            if((nums[i]+nums[j]) == sum){
            
             return true;
             break;
            }
        }
        
    }
    return flag;
}
int main(int argc, char const *argv[])
{
    vector<int> nums = {11, 15, 26, 38, 9, 10};
    int ans = findPair(nums,35);
    
    if(ans == 1){
        cout<<"true"<<endl;
    }
    else {
          cout<<"false"<<endl;
    
    }
      
    return 0;
}
