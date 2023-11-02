// Problem: B. Queue at the School
// Contest: Codeforces - Codeforces Round 163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;
	
    for (int x = 0; x < t; x++)
    {
        for (int i = 0; i < n-1; i)
        {
            if (int(s[i]) < int(s[i + 1]))
            {
                swap(s[i], s[i + 1]);
                i+=2;
            }
            else{
            	i++;
            }
        }
    }
    

		cout << s << endl;	
	
    
    return 0;
}