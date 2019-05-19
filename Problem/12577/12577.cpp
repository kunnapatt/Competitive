#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vs vector<string>
#define vi vector<int>

int main() {
    vs vstr ;
    string inp ;
    //freopen("test.in", "r", stdin) ;
    while( cin >> inp && inp != "*" ){
        if ( inp == "Hajj" ){
            vstr.push_back("Hajj-e-Akbar") ;
        }else if ( inp == "Umrah" ){
            vstr.push_back("Hajj-e-Asghar") ;
        }
    }
    //cout << vstr.size() << endl ;
    FOR(i, 0, vstr.size()){
        cout << "Case " << i+1 << ": " << vstr[i] << endl ;
    }
    return 0 ;
}
