//kth maximum element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kmax(vector<int>& arr,int k){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int ans = arr[(n-k)];
     return ans;
}

int main() {
    vector<int> arr = {4, 2, 7, 1, 9};
    
  int sol = kmax(arr,2);
  cout<<sol;
   
    return 0;
}
