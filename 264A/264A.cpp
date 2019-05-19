#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
int main(){
    string str ;
    //freopen("test.in", "r", stdin) ;
    cin >> str ;
    int siz = str.length() ;
    vi a ;
    vi b ;

    FOR(i, 0, siz){
        if ( str[i] == 'l' ){
            a.push_back(i+1) ;
        }else {
            b.push_back(i+1) ;
        }

    }
    FOR(i, 0, b.size()){
        cout << b[i] << "\n" ;
    }
    FOR(i, 0, a.size()){
        cout << a[a.size()-i-1] << "\n" ;
    }
    return 0 ;
}
