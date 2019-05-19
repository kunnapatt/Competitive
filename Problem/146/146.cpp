#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    string str ;
    while ( cin >> str && str != "#" ){
        if ( next_permutation(str.begin(), str.end()) ){
            cout << str << endl ;
        }else {
            cout << "No Successor\n" ;
        }
    }
}


