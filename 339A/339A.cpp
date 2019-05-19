#include <bits/stdc++.h>

using namespace std ;

int main() {
    int a = 0, cou = 0 ;
    string str1 ;
    //freopen("test.in", "r", stdin) ;
    cin >> str1 ;
    int strpos = 0 ;
    vector<string> vs(1) ;
    vector<int> pos ;
    bool check1 = false ;
    if ( str1.find("+") != -1 ) {
        check1 = true ;
    }
    if ( check1 == true ) {
        for ( int i = 0  ; i < str1.length() ; i++ ) {
                if ( str1[i] == '+' ) {
                    pos.push_back(i) ;
                    check1 = true ;
                }
        }
            vs.resize(pos.size()+1) ;
        for ( int i = 0 ; i < pos.size() ; i++ ) {
            if ( i == 0 ) {
                a = pos[i+1] - pos[i] ;
                for ( int j = 0 ; j < pos[i] ; j++ ) {
                    vs[i] += str1[j] ;
                }
            }else {
                for ( int j = pos[i-1]+1 ; j < pos[i] ; j++ ) {
                    vs[i] += str1[j] ;
                }
            }
            strpos = str1.length() - pos[pos.size()-1] - 1 ;
            cou++ ;
        }

        for ( int i = cou ; i <= cou ; i++ ) {
            for ( int j = pos[pos.size()-1]+1 ; j < str1.length() ; j++ ) {
                vs[i] += str1[j] ;
            }
        }
        sort(vs.begin(), vs.end()) ;
    }else {
        for ( int i = 0 ; i < 1 ; i++ ) {
            for ( int j = 0 ; j < str1.length() ; j++ ) {
                vs[i] += str1[j] ;
            }
        }
    }
    for ( int i = 0 ; i < vs.size() ; i++ ) {
        if ( i == vs.size()-1 ){
            cout << vs[i] ;
        }else {
            cout << vs[i] << "+" ;
        }
    }

    return 0 ;
}
