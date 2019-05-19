#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define printt(a) for(int i = c ; i < a.size() ; i++){ cout << a[i] << endl ;}



int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    int N = 100001 ;
    vector<long long int> a(N, 0) ;
    FOR(i, 0, n){
        int x ;
        cin >> x ;
        a[x]++ ;
    }

    vector<long long int> pts(N, 0) ;
    pts[1] = a[1] ;
    FOR(i, 2, N){
        pts[i] = max(a[i]*i + pts[i-2], pts[i-1]) ;
    }
    cout << pts[N-1] << endl ;
    return 0 ;
}
