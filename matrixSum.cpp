#include <iostream>
#include <vector>

using namespace std;

int calculateMatrixSum(vector<vector<int>>& matrix) {
    int numRows = matrix.size();
    int numCols = matrix[0].size();
    vector<bool> selected (numCols, false);
    int maxSum = 0;

    for (int i = 0; i < numRows; ++i) {
        int maxValue = 0;
        int selectedCol = -1;
        for (int j = 0; j < numCols; ++j) {
            if (selected[j] == 0 && matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
                selectedCol = j;
            }
        }
        maxSum += maxValue;
        selected[selectedCol] = true;
    }
    return maxSum;
}

int main() {
    vector<vector<int>> matrix = {
            {7, 53, 183, 439, 863},
            {497, 383, 563, 79, 973},
            {287, 63, 343, 169, 583},
            {627, 343, 773, 959, 943},
            {767, 473, 103, 699, 303}
    };

    int maxSum = calculateMatrixSum(matrix);
    cout << "Matrix Sum: " << maxSum << endl;

    return 0;
}
