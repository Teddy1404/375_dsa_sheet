//Find if there is a pair with a given sum in the rotated sorted Array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[],int n,int k){
    unordered_map<int,int> m;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int b = k - arr[i];
        if(m[b]){
            ans += m[b];
        }
        m[arr[i]]++;
    }
    return ans;

}
int main(int argc, char const *argv[])
{
    int arr[4] = {1,1,1,1};
    int ans = getPairsCount(arr,4,2);
    cout<<ans;
    //here ans is the count that how many pairs it make .
    return 0;
}
