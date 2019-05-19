#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, s ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> s ){
        vi a(n) ;
        bool chstart = false ;
        FOR(i, 0, n){
            cin >> a[i] ;
            if ( i == 0 && a[0] == 0 ){
                cout << "NO\n" ;
                chstart = true ;
            }
        }
        vi b(n) ;
        FOR(i, 0, n){
            cin >> b[i] ;
        }
        if ( !chstart ){
            bool ch = false ;
            FOR(i, 0, n){
               if ( (i == s-1 && a[i] == 1) ){
                    cout << "YES\n" ;
                    break ;
               }else {
                    if ( i > s-1 && a[i] == 1 && b[i] == 1 ){
                        for(int j = i ; j >= 0 ; j--){
                            if ( j == s-1 && b[j] == 1 ){
                                cout << "YES\n" ;
                                ch = true ;
                                break ;
                            }else if ( j == s-1 && b[j] == 0 ){
                                cout << "NO\n" ;
                                ch = true ;
                                break ;
                            }
                        }
                    }
                    if ( ch ){
                        break ;
                    }
               }
                if ( i == n-1 && !ch ){
                    cout << "NO\n" ;
                }
            }
        }
    }
    return 0 ;
}

