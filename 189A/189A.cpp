#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int opt(int n, int a, int b, int c, int ans){
    if ( n == 0 ){
        return 0 ;
    }else if ( n < 0 ) {
        return -9999999 ;
    }else {
        ans = max(max(opt(n - a, a, b, c, ans), opt(n - b, a, b, c, ans)), opt(n - c, a, b, c, ans)) + 1 ;

    }
    return ans ;

}

int main(){
    int n, a, b, c;
    freopen("test.in", "r", stdin) ;
    cin >> n >> a >> b >> c ;
    int i = 0 ;
    //vector<int> fib(n+1, 0) ;
    //int prenum = 0, prepnum = 0, sum = 1 ;
    //fib(n) = fib(n-1) + fib(n-2) ;

    vector<int> opt(n+1, 0);
    FOR (i, 1, n+1) {
        opt[i] = -999999;
        if (i >= a)
            opt[i] = max(opt[i], opt[i-a]+1);
        if (i >= b)
            opt[i] = max(opt[i], opt[i-b]+1);
        if (i >= c)
            opt[i] = max(opt[i], opt[i-c]+1);
    }
    cout << opt[n] ;

    //cout << sum << endl ;
    //cout << opt(n, a, b, c, ans) << endl ;
}
