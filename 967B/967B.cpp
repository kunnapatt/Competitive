#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for (int i = a ; i < b ; i++ )
#define vi vector<int>
int main() {
    int n, vlw, bloc ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> vlw >> bloc ;
    int a[n] ;
    int sum = 0 ;
    FOR(i, 0, n){
        cin >> a[i] ;
        sum += a[i] ;
    }
    int first = a[0] ;
    int co = 0 ;
    sort(a+1, a+n) ;
    for(int i = n-1 ; i >= 0 ; i--){
        float ss = vlw*first/sum ;
        if ( ss >= bloc ){
            //cout << i << ", " << a[i] << ", " << co << endl ;
            cout << co << endl ;
            return 0 ;
        }
        //cout << "i = " << i << ", " << a[i] << ", " << ss << endl ;
        sum -= a[i] ;
        co++ ;

    }
    //FOR(i, 0, n){
        //cout << a[i] << endl ;
    //}

    return 0 ;
}
