// UNSOLVED
#include <bits/stdc++.h>
using namespace std;

bool f(vector<vector<int>> &grid, int& h, int i, int j)
{
    int row = grid.size();
    int col = grid[0].size();
    cout <<"Value "<<grid[i][j]<< " i: " <<i<<" j: "<<j<<" health: "<<h<<endl;
    if (i < 0 || i > row - 1 || j < 0 || j > col - 1)
    {
        return false;
    }
    if (i == 0 && j == 0)
    {
        return true;
    }
    
    int cH = h - grid[i][j];
    if (cH < 1)
    {
        return false;
    }
    // cout << "3" << endl;

    // cout << "4" << endl;
    bool up = f(grid, cH, i - 1, j);
    bool down = f(grid, cH, i + 1, j);
    bool right = f(grid, cH, i, j + 1);
    bool left = f(grid, cH, i, j-1);
    cout << up << " " << down << " " << right << " " << left << endl;
    return up || down || right || left;
}

bool findSafeWalk(vector<vector<int>> &grid, int health)
{
    int row = grid.size();
    int col = grid[0].size();
    int h = health;
    return f(grid, h, row - 1, col - 1);
}

int main()
{
    vector<vector<int>> grid = {{0, 1, 0, 0, 0}, {0, 1, 0, 1, 0}, {0, 0, 0, 1, 0}};
    cout << findSafeWalk(grid, 2) << endl;
}

// class Solution {
// private:
//     bool f(vector<vector<int>>& grid, int health,int i, int j){
//         int row = grid.size();
//         int col = grid[0].size();

//         if(i<0 || i>row-1 || j<0 || j<col-1){
//             return false;
//         }
//         if(grid[i][j]!=1){
//             health = health-1;
//         }
//         if(health <= 0){
//             return false;
//         }
//         if(i==0 && j ==0){
//             return true;
//         }
//         bool up = f(grid,health,i-1,j);
//         bool down = f(grid,health,i+1,j);
//         bool right = f(grid,health,i,j+1);
//         bool left = f(grid,health,i-1,j);
//         return up || down || right || left;
//     }

// public:
//     bool findSafeWalk(vector<vector<int>>& grid, int health) {
//         int row = grid.size();
//         int col = grid[0].size();
//         return f(grid,health,row-1,col-1);
//     }
// };