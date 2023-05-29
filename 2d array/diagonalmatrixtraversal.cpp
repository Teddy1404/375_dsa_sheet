#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> findDiagonal(vector<vector<int>>& mat){
        if(mat.empty() || mat[0].empty())
        {
            return {};
        }
         int m = mat.size(); // Number of rows
        int n = mat[0].size(); // Number of columns
        vector<int> result(m * n); // Result vector to store the diagonal elements
        int row = 0, col = 0; // Starting position
        
        // Traverse through the matrix
        for (int i = 0; i < m * n; i++) {
            result[i] = mat[row][col]; // Store current element

//move up-right
if((row+col) % 2 == 0){
    if(col == n-1)
    {
        row++;
    }
    else if(row == 0)
    {
        col++;
    }
    else{
        row--;
        col++;
    }
}
else{
    if(row == m-1)
    {
        col++;
    }
    else if(col == 0)
    {
        row++;
    }
    else{
        row++;
        col--;
    }
}

        }
        return result;
    }

};

int main(int argc, char const *argv[])
{
    vector<vector<int>> matrix = {
        {1, 2, 3},{4,5,6},{7,8,9}
    };
    solution s;
    vector<int> diagonal = s.findDiagonal(matrix);

    //print 
    for(int elemenent : diagonal)
    {
        cout<<elemenent<<" ";
    }
    cout<<endl;
    return 0;
}
