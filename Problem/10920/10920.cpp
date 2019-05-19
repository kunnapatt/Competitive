#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int sz, p ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> sz >> p && ( sz != 0 && p != 0 ) ){
        int middle = (sz+1)/2 ;
        float pp = (sqrt(p) + 2.0)/2.0 + (sz)/2.0 ;
        int pointmaxvalue = (int)pp ;
        int border = 2*pointmaxvalue - sz ;
        int borderT = pointmaxvalue ;
        int borderR = pointmaxvalue ;
        int borderB = pointmaxvalue - border + 1 ;
        int borderL = pointmaxvalue - border + 1 ;
        int maxvalue1 = pow(2*(pointmaxvalue - sz/2) - 1, 2) + 0.1 ;
        int minvalue = maxvalue1 - 4*(pointmaxvalue - 1) + 1 ;

        int line = 0, column = 0 ;
        cout << pointmaxvalue << ", " << minvalue << ", " << maxvalue1 << ", " << border << endl ;
        int ch = sqrt(p) ;
        if ( p == 1 ){
            line = middle ;
            column = middle ;
        }else if ( pow(ch, 2) == p ) {
            line = pointmaxvalue-1 ;
            column = pointmaxvalue-1 ;
        }else if ( p >= minvalue && p <= (minvalue + border - 2) ){
            line = borderT ;
            column = borderT - border + 1 + (minvalue + border - 2) - p ;
            cout << "A" << endl ;
        }else if ( minvalue + border - 1 <= p && p <= minvalue + 2*border - 3 ){
            line = borderB + ( minvalue + 2*border - 3 - p ) ;
            column = borderB ;
            cout << "B" << endl ;
        }else if ( minvalue + 2*border - 2 <= p && p <= maxvalue1 - border + 1 ){
            line = borderL ;
            column = borderL + 1 + (p - (minvalue + 2*border) - 2) ;
            cout << "C" << endl ;
        }else if ( (maxvalue1 - border + 2) <= p && p <= maxvalue1 ){
            line = borderR - 1 + (p - (maxvalue1 - border + 2)) ;
            column = borderR ;
            cout << "D" << endl ;
        }
        cout << "Line = " << line << ", column = " << column << ".\n" ;
    }
    return 0 ;
}

