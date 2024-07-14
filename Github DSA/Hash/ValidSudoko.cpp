
#include <bits/stdc++.h>
using namespace std;
// bool isValidSudoku(vector<vector<char>> &board)
// {
//     int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
//     cout << board.size();

//     for (int i = 0; i < board.size(); ++i)
//     {
//         cout << board[i].size();

//         for (int j = 0; j < board[i].size(); ++j)
//             if (board[i][j] != '.')
//             {
//                 int num = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
//                 if (used1[i][num] || used2[j][num] || used3[k][num])
//                     return false;
//                 used1[i][num] = used2[j][num] = used3[k][num] = 1;
//             }
//     }
//     return true;
// }

bool isValidSudoku(vector<vector<char>> &board)
{
    int checkRow[9][9] = {0};
    int checkCol[9][9] = {0};
    int checkBox[9][9] = {0};
    for (int i = 0; i < board.size(); ++i)
    {
        for (int j = 0; j < board[i].size(); ++j)
        {
            cout << board[i][j] << endl;
            if (board[i][j] != '.')
            {
                int num = board[i][j] - '0' - 1; // so that we can give the 0th indexing
                cout << num << endl;
                int k = (i / 3) * 3 + j / 3;
                if (checkRow[i][num] || checkCol[j][num] || checkBox[k][num])
                {
                    return false;
                }
                checkRow[i][num] = 1;
                checkCol[j][num] = 1;
                checkBox[k][num] = 1;
            }
        }
    }
    return true;
}

int main()
{
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    isValidSudoku(board);
}