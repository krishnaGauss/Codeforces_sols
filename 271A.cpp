// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round 166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

bool byear(int y)
{
    string s = to_string(y);
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        string d = s.substr(i + 1, s.length() - i);
        size_t found = d.find(s[k]);

        if (found != string::npos)
        {
            return false;
        }
        k++;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;
    y += 1;
    while (true)
    {
        bool ans = byear(y);
        if (ans)
        {
            cout << y << endl;
            break;
        }
        else
        {
            y += 1;
            byear(y);
        }
    }
    return 0;
}