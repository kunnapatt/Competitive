#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    map<string, string> m ;
    string oldn[n], newn[n] ;
    FOR(i, 0, n){
        cin >> oldn[i] >> newn[i] ;
        //cout << oldn[i] << ", " << newn[i] << endl ;
        m[oldn[i]] = newn[i] ;
    }
    int co = 0 ;
    FOR(i, 0, n){
        auto shn = m.find(newn[i]) ;
        if ( shn != m.end() ){
            //cout << newn[i] << endl ;
            for ( auto edn = m.begin() ; edn != m.end() ; ++edn ){
                if ( edn->second == newn[i] ){
                    edn->second = shn->second ;
                }
            }
            m.erase(newn[i]) ;
        }else {
            co++ ;
        }

    }
    cout << co << endl ;
    //cout << "after delete" << endl ;
    for(auto ma : m ){
        cout << ma.first << " " << ma.second << endl ;
    }
    return 0 ;
}
