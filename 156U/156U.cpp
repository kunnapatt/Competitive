#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    //freopen("test.in", "r", stdin) ;
    map<string, string> orig ;
    map<string, int> m ;
    string w ;
    while ( cin >> w, w != "#" ) {
        string o = w ;
        int len = w.length() ;
        FOR(i, 0, len) {
            if ( w[i] >= 'A' && w[i] <= 'Z')
                w[i] += 32 ;
        }
        sort(w.begin(), w.end()) ;
        if (m.count(w) == 0){
            m[w] = 1 ;
        }else {
            m[w]++ ;
        }
        orig[w] = o ;
        //cout << w << endl ;
    }
    vector<string> ans ;
    for ( auto x : m ) {
        if ( x.second == 1) {
            ans.push_back(orig[x.first]) ;
            //cout << orig[x.first] << endl ;
        }
    }
    sort(ans.begin(), ans.end()) ;
    for ( auto w : ans ) {
        cout << w << endl ;
    }
    return 0 ;
}
