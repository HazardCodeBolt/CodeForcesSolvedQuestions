#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class T>
void printCollection(T collection) {
    for(int i : collection) {
        cout << i << ' ';
    }
    cout << '\n';
}

int main()
{

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    // get k consecutive plankss that the sum of their heights is minimal possible
    // one after another
    //
    ll n, k;
    cin >> n >> k;

    ll sum = 0;
    vector<ll> h;
    ll nop = n;    
    ll ks = k;


    while (nop--)
    {
        int temp;
        cin >> temp;
        sum += temp;
        h.push_back(sum);
    }
    vector<ll> sms;

    ll mn = h.at(k-1), mnidx = 1;
    ll cnt = 1; 
    for(int i=k; i<n; i++) {
        ll res = min(mn, h.at(i) - h.at(i-k));  
        
        cnt++; 
        if (mn != res) {
            mn = res;
            mnidx =  cnt;
        }
    }
    cout << mnidx << '\n';
    
}