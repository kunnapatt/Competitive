#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    cin >> n ;
    FOR(i, 0, n) {
        int j, k ;
        cin >> j >> k ;
        j /= 3 ;
        k /= 3 ;
        cout << j*k << endl ;
    }
    return 0 ;
}
