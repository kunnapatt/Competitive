#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++ )

int main() {
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    string str[n], oldn[n], newn[n] ;
    cin.ignore() ;
    map<string, string> m ;
    FOR(i, 0, n){
        getline(cin, str[i]) ;
        int possp = str[i].find(' ') ;
        //cout << possp << endl ;
        oldn[i] = str[i].substr(0,possp) ;
        newn[i] = str[i].substr(possp+1) ;
        //cout << oldn[i] << newn[i] << endl ;
        //m.insert(pair<string, string>(oldn[i], newn[i])) ;
        //m[oldn[i]] = newn[i] ;
    }
    int j = 0 ;

    FOR(i, 0, n){
        FOR(j, 0, n){
            if ( oldn[i] == newn[j] ) {
                cout << i << ", " << oldn[i] << ", " << j << ", " << newn[j] << endl ;
                m[oldn[j]] = newn[i] ;
            }else {
                //cout << oldn[i] << ", " << newn[i] << endl ;
            }

        }

    }

    cout << "after insert " << endl ;
    for(auto ma = m.begin() ; ma != m.end() ; ma++){
        cout << ma->first << ", " << ma->second << endl ;
    }
    return 0 ;
}
