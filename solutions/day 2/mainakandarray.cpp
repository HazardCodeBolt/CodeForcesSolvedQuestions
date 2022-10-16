#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;

    while (t--)
    {
        int c;
        cin >> c;
        vector<int> v;

        while (c--)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        // now we have the data
        int ans = v.at(v.size() - 1) - v.at(0);
        for (int i = 1; i < v.size(); i++)
        {
            ans = max(ans, v.at(i - 1) - v.at(i));
        }

        for (int i = 0; i < v.size() - 1; i++)
        {
            ans = max(ans, v.at(v.size() - 1) - v.at(i));
        }

        for (int i = 1; i < v.size(); i++)
        {
            ans = max(ans, v.at(i) - v.at(0));
        }

        cout << ans << '\n';
    }
}