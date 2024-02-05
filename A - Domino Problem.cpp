// Language: C++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] != s[n - 1])
    {
        cout << 1 << '\n';
        return 0;
    }
    for (int i = 1; i < n - 2; i++)
    {
        if (s[i] != s[0] && s[i + 1] != s[0])
        {
            cout << 2 << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}
