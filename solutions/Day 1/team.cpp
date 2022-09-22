#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int cn;
    cin >> cn;
    int sn = 0;

    while (cn != 0)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }
        if (sum >= 2)
        {
            sn++;
        }
        cn--;
    }
    cout << sn;
}
