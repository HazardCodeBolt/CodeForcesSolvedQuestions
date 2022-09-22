#include <bits/stdc++.h>
using namespace std; 

int main(){

    int cn;
    cin >> cn;
    
    while (cn!=0) {
        
        string word; 
        cin >> word;

        if(word.length()>10) {
            cout << word[0] << word.length()-2 << word[word.length()-1] << '\n';
        } else {
            cout << word << '\n';
        }
        cn--;
    }
}