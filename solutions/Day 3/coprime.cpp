#include <bits/stdc++.h>
using namespace std;

int main()
{

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    // coprime is when to numbers only have 1 as the common prime
    // GCD is 1

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int c = n;
        set<int> nums;

        map<long long, int> indexes;
        int cnt = 0;

        while (c--)
        {
            int temp;
            cin >> temp;
            indexes[temp] = cnt + 1;
            nums.insert(temp);
            cnt++;
        }

        vector<long long> numbers;

        for (int i : nums)
        {
            numbers.push_back(i);
        }

        int maximum_ij = 0;
        n = numbers.size();
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < n; k++)
            {

                if (__gcd(numbers.at(i), numbers.at(k)) == 1)
                {
                    maximum_ij = max(indexes[numbers.at(i)] + indexes[numbers.at(k)], maximum_ij);
                }
            }
        }
        cout << (maximum_ij == 0 ? -1 : maximum_ij) << '\n';
    }
}