// Дано число n, расположить числа от 1 до n^2 в двумерном массиве по спирали.

#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n, c = 1, x = 0, y = -1, d_row = 0, d_col = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    while (c <= n * n)
    {
        if (
            x + d_row >= 0 && x + d_row < n
            && y + d_col >= 0 && y + d_col < n
            && a[x + d_row][y + d_col] == 0
        ) {
            x += d_row;
            y += d_col;
            a[x][y] = c;
            c++;
        } else {
            if (d_col == 1) {
                d_col = 0;
                d_row = 1;
            } else if (d_row == 1) {
                d_row = 0;
                d_col = -1;
            } else if (d_col == -1) {
                d_row = -1;
                d_col = 0;
            } else if (d_row = -1) {
                d_row = 0;
                d_col = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}