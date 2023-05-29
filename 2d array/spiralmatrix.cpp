#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    int l = 0 , r = n-1, t=0,b=m-1;
    vector<int> ans;
    while(l<=r && t<=b){
        //top row
        for(int i=l;i<=r;i++)
        {
             ans.push_back(matrix[t][i]);
        }
        t++;
        //right row
        for (int i = t; i<=b; i++)
        {
            /* code */
            ans.push_back(matrix[i][r]);

        }
        r--;
        //bottom row
        if(t<=b)
        {
            for (int  i = r; i>=l; i--)
            {
                /* code */
                ans.push_back(matrix[b][i]);
            }
            b--;
        }
        if(l<=r)
        {
            for (int i = b; i>= t; i--)
            {
                /* code */
                ans.push_back(matrix[i][l]);
            }
            l++;
        }
        
    }
    return ans;
}
int main(int argc, char const *argv[])
{
  vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result = spiralOrder(matrix);

    cout << "Spiral Order Traversal: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
