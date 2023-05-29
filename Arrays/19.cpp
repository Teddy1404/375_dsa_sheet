//kth smallest element
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int small(vector<int> arr, int k){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    return arr[k-1];
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {7,10,4,3,20,15};
    int ans = small(arr,3);
    cout<<ans;
    
    return 0;
}

