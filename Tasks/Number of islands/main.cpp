#include <iostream>
#include <vector>


using std::vector;


class Solution {
public:

    int numIslands(vector<vector<char>>& grid) {

        int count_islands = 0;
        row_size = grid.size();

        if (!grid.empty())
            column_size = grid[0].size();

        for (int i = 0 ; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    DFS (grid, i, j);
                    count_islands++;
                }
            }
        }

        return count_islands;
    }


private:

    int row_size;
    int column_size;

    void DFS (vector<vector<char>>& grid, int row, int column)
    {
        grid[row][column] = '0';


        if (column - 1 >= 0 && grid[row][column - 1] == '1')
            DFS (grid, row, column - 1);

        if (column + 1 < column_size && grid[row][column + 1] == '1')
            DFS (grid, row, column + 1);

        if (row - 1 >= 0 && grid[row - 1][column] == '1')
            DFS (grid, row - 1, column);

        if (row + 1 < row_size && grid[row + 1][column] == '1')
            DFS (grid, row + 1, column);
    }
};


int main ()
{
    Solution solution{};
    vector <vector <char>> grid = {};
    std::cout << solution.numIslands(grid);
}