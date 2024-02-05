// Language: C++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> v;
    for (int i = 0; i < s.size(); ++i)
    {
        v.push_back(s.substr(i) + s.substr(0, i));
    }
    sort(v.begin(), v.end());
    cout << v[0] << "\n"
         << v.back() << endl;
    return 0;
}