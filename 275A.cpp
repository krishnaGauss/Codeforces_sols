// Problem: A. Lights Out
// Contest: Codeforces - Codeforces Round 168 (Div. 2)
// URL: https://codeforces.com/problemset/problem/275/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int light[3][3];
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            light[i][j] = 1;
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                light[i][j] = 1 - light[i][j];

                if (i - 1 >= 0)
                    light[i - 1][j] = 1 - light[i - 1][j];

                if (i + 1 <= 2)
                    light[i + 1][j] = 1 - light[i + 1][j];

                if (j - 1 >= 0)
                    light[i][j - 1] = 1 - light[i][j - 1];

                if (j + 1 <= 2)
                    light[i][j + 1] = 1 - light[i][j + 1];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << light[i][j];
        }
        cout << endl;
    }

    return 0;
}