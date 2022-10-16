#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int t; 
    cin >> t;

    while (t--) {
        string grid[8];
        bool isAllR = false; 
        for (int i = 0; i < 8; i++)
        {
            cin >> grid[i];
            if(grid[i] == "RRRRRRRR") {
                isAllR = true;      
            }
        }

        if(isAllR) {
            cout << "R\n";
        } else {
            cout << "B\n";
        }

    }
}