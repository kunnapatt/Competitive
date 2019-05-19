#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n, m ;
    freopen("test.in", "r", stdin) ;
    while ( cin >> n >> m && n != 0){
        vi a(m, 0) ;
        FOR(i, 0, m){
            cin >> a[i] ;
        }
        //sort(a.begin(), a.end()) ;
        int cou = n - a[0] ;
        //cout << cou << endl ;
        FOR(i, 1, m){
            if (a[i-1] > a[i]){
                cou += (a[i-1 ] - a[i]) ;
            }
            //cout << a[i-1] << ", " << a[i] << ", " << cou << endl ;
            //cout << cou << endl ;
        }
            cout << cou << endl ;
            //cout << cou << endl << "------------" << endl ;
    }

    return 0 ;
}
