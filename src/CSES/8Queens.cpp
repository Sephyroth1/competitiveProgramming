#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool checkSafe(const vector<string> &b, int row, int col)
{
    int n = b.size();

    for (int i = 0; i < row; i++)
    {
        if (b[i][col] == 'q')
            return false;
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (b[i][j] == 'q')
            return false;
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (b[i][j] == 'q')
            return false;
    }

    return true;
}

void chessSolve(vector<string> &b, ll row, ll &numWays)
{
    int n = b.size();
    if (row == n)
    {
        numWays++;
        return;
    }

    for (int c = 0; c < b.size(); c++)
    {
        if (checkSafe(b, row, c) && b[row][c] != '*')
        {
            b[row][c] = 'q';
            chessSolve(b, row + 1, numWays);
            b[row][c] = '.';
        }
    }
}

int main()
{
    vector<string> b(8, string(8, '.'));
    string input;
    ll num = 0;
    for (int i = 0; i < 8; i++)
    {
        getline(cin, input);
        b[i] = input;
    }
    chessSolve(b, 0, num);
    cout << num << "\n";
    return 0;
}

/*
1 10            10s place: 9
0 11            1 - 1 = 0
1 12
1 13            3 - 2 = 1
1 14
2 15            5 - 3 = 2
1 16
3 17            7 - 4 = 3
1 18
4 19            9 - 5 = 4
1 20
5 21
1 22
6 23
1 24
7 25
1 26
8 27
1 28
9 29
2 30
0 31
100 5
101 3
102 6
103 3
104 7

582
*/