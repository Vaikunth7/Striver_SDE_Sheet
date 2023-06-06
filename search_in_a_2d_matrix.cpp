using namespace std;
#include<vector>
bool searchMatrix(vector<vector<int>> &mat, int target)
{

    int row = mat.size();
    int column = mat[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (mat[i][j] == target)
            {
                return true;
            }
        }
    }

    return false;
}