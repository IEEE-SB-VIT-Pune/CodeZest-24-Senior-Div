// Language: C++
#include <bits/stdc++.h>
using namespace std;

const vector<int> dx = {0, 0, 1, -1};
const vector<int> dy = {1, -1, 0, 0};

bool isValid(int i, int j, int h, int w)
{
    return i >= 0 && i < h && j >= 0 && j < w;
}

void dfs(vector<string> &s, vector<vector<bool>> &vis, vector<char> &next, int i, int j)
{
    vis[i][j] = true;
    for (int k = 0; k < 4; k++)
    {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (isValid(ni, nj, s.size(), s[0].size()) &&
            s[ni][nj] == next[s[i][j]] && !vis[ni][nj])
        {
            dfs(s, vis, next, ni, nj);
        }
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    if (s[0][0] != 's')
    {
        cout << "No" << endl;
        return 0;
    }

    vector<char> next(256);
    next['s'] = 'n';
    next['n'] = 'u';
    next['u'] = 'k';
    next['k'] = 'e';
    next['e'] = 's';

    vector<vector<bool>> vis(h, vector<bool>(w));
    dfs(s, vis, next, 0, 0);

    cout << (vis[h - 1][w - 1] ? "Yes" : "No") << endl;
    return 0;
}