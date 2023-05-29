#include<bits/stdc++.h>
using namespace std;
class solution{
public:
void rotatedmatrix(vector<vector<int>>& matrix){
int n = matrix.size();
for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
   swap(matrix[i][j], matrix[j][i]);
    }
}
for (int i = 0; i < n; i++)
{
    /* code */
    reverse(matrix[i].begin(),matrix[i].end());
}

}
};
int main(int argc, char const *argv[])
{
    /* code */
        vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    solution s;
    s.rotatedmatrix(matrix);
    for(const auto& row : matrix)
    {
        for(int num: row)
        {
     cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// the overall time complexity of the "rotate" function is O(n^2), and the space complexity is O(1).