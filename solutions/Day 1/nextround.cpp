#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    // score >= kth if score is positive
    int n, k;
    cin >> n >> k;

    // scores in descending order
    // find the number at k and then count ai >= k
    int cp = 0;
    int pos = 1;
    int last;
    while (n--)
    {
        int temp;
        cin >> temp;

        if (pos <= k && temp > 0)
        {
            last = temp;
            cp++;
        }
        else if (temp == last && temp > 0)
        {
            cp++;
        }
        pos++;
    }

    cout << cp << '\n';
}