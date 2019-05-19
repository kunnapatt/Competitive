#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for (int i = a ; i < b ; i++)

int main () {
    int n ;
    //reopen("test.in", "r", stdin) ;
    cin >> n ;
    vector<int> a(n) ;
    string str[n] ;
    FOR(i, 0, n){
        cin >> a[i] ;
        a[i] = (a[i]*63+7492)*5-498 ;
        str[i] = to_string(a[i]) ;
    }
    FOR(i, 0, n){
        //cout << str[i] << endl ;
        cout << str[i][str[i].length()-2] << endl ;
    }

    return 0 ;

}
