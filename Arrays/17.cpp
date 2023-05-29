//cotaine with most water
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int maxArea(vector<int>& height) {
        int n = height.size();
        int max1 = 0;
        int l =0;
        int r = n-1;
        while(l<=r){
            int lh = height[l];
            int rh = height[r];
            int minheight = min(lh,rh);
            int dis = r-l;
            int currarr = minheight*dis;
     max1 = max(max1 , currarr);
            if(lh<=rh){
                l++;
            }
            else{
                r--;
            }
        }
        return max1;

    }

int main(int argc, char const *argv[])
{
    vector<int> height = {1,2,3,4,5};
    int sum = maxArea(height);
    cout<<sum<<endl;
    return 0;
}
