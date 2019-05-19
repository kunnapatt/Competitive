#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main(){
    long n ;
    while ( cin >> n ){
        set<long> div ;
        div.insert(1) ;

        long an = n*(n+1)/2 ;
        long d = (an-1)/(n-1) ;
        div.insert(an) ;
        long cou = 2 ;
        while ( cou < sqrt(n)+ 2 ){
            if ( n % cou == 0 ){
                long ai = n/cou * ( 2 + ( n/cou - 1 ) * cou )/2 ;
                long ai2 = cou * ( 2 + ( cou - 1 ) * n/cou )/2 ;
                div.insert(ai) ;
                div.insert(ai2) ;
            }
            cou++ ;
        }
        for(auto b:div){
            cout << b << " " ;
        }
        cout << endl ;

    }
    return 0 ;
}
