#include <bits/stdc++.h>

using namespace std ;

#define iii tuple<int, int, int>


/** (gcd, x, y) where ax + by = gcd **/
iii gcdExtended(int a, int b){
    iii ac = make_tuple(a, 1, 0) ;
    iii bc = make_tuple(b, 0, 1) ;
    while ( get<0>(bc) != 0 ){
        int q = get<0>(ac) / get<0>(bc) ;
        int r = a % b ;
        iii rc = make_tuple(
        get<0>(ac) % get<0>(bc), /// remainder
        get<1>(ac) - q*get<1>(bc), /// new x
        get<2>(ac) - q*get<2>(bc) /// new y
        ) ;
        ac = bc ;
        bc = rc ;
    }
    return ac ;
}

int main() {
    //freopen("test.in", "r", stdin) ;
    int n, m ;
    cin >> n >> m ;
    iii result = gcdExtended(25, 10) ;
    cout << get<0>(result) << " " << get<1>(result) << " " << get<2>(result) << "\n" ;
    return 0 ;
}
