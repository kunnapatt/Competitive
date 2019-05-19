#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){

    freopen("test.in", "r", stdin) ;
    vi a ;
    int x ;
    while ( cin >> x ){
        a.push_back(x) ;
    }
    int len = a.size() ;
    int ans = 0, pos = -1 ;
    vi mn(len+1, 0), mnp(len+1), pred(len) ;
    mn[0] = -1e9+7 ;
    FOR(i, 0, len){
        int len1 = lower_bound(mn.begin(), mn.begin() + ans + 1, a[i]) - mn.begin() + 1 ; // len1 is lcs(i)
        //cout << len1 << endl ;
        //ans++ ;
        if ( len > ans ){
            ans = len ;
            pos = i ;
            mn[len] = a[i] ;
            mnp[len] = i ;
        }else if ( len == ans ){
            pos = i ;
        }
        if ( a[i] <= mn[len] ){
            mn[len] = a[i] ;
            mnp[len] = i ;
        }
        pred[i] = mnp[len-1] ;
        //cout << len1 << ", " << i << endl ;
    }
    stack<int> seq ;
    seq.push(a[pos]) ;
    for (int i = pos, count = ans - i ; count > 0 ; count--){
        i = pred[i] ;
        seq.push(a[i]) ;
    }
    printf("%d\n-\n", ans) ;
    while ( seq.size() > 0 ){
        cout << seq.top() << "\n" ;
        seq.pop() ;
    }
    //FOR(i, 0, len1)
    return 0 ;
}
