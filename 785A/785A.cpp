#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n, co = 0 ;
    cin >> n ;
    string c[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> c[i] ;
        if ( c[i] == "Cube" ){
            co += 6 ;
        }else if ( c[i] == "Tetrahedron" ) {
            co += 4 ;
        }else if ( c[i] == "Octahedron" ) {
            co += 8 ;
        }else if ( c[i] == "Dodecahedron" ) {
            co += 12 ;
        }else if ( c[i] == "Icosahedron" ) {
            co += 20 ;
        }else {
            if ( i == 1 ){

            }else {
                i-- ;
            }
        }
    }
    cout << co << endl ;
    return 0 ;
}
