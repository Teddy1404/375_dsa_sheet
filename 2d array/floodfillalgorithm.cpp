#include <iostream>
#include <vector>

using namespace std;

void fill(vector<vector<int>>& canvas, int x, int y, int newColor, int originalColor) {
    // Implementation of the fill function
    // ... (same code as before)
    int m = canvas.size();
    int n = canvas[0].size();

    if(x<0 || x>=m || y<0|| y>=n || canvas[x][y] != originalColor){
        return ;
    }
   canvas[x][y] = newColor;
   fill(canvas, x-1, y, newColor, originalColor); //up
   fill(canvas, x+1, y, newColor, originalColor); //down
   fill(canvas, x, y-1, newColor, originalColor); //left
   fill(canvas, x, y+1, newColor, originalColor); //right

   

}

int main() {
    // Example canvas with colors represented as integers
    vector<vector<int>> canvas = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0},
        {1, 1, 0, 1, 0},
        {1, 1, 0, 0, 1}
    };

    int x = 2;  // Starting point x-coordinate
    int y = 2;  // Starting point y-coordinate
    int newColor = 2;  // New color to fill
    int originalColor = canvas[x][y];  // Original color at the starting point

    fill(canvas, x, y, newColor, originalColor);

    // Print the updated canvas
    for (const auto& row : canvas) {
        for (int color : row) {
            cout << color << " ";
        }
        cout << endl;
    }

    return 0;
}
