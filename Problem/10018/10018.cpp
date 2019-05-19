#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

long revnum(long n){
    long rev = 0 ;
    while (n){
        rev *= 10 ;
        rev += n%10 ;
        n /= 10 ;
    }
    return rev ;
}

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        long ans, rev ;
        cin >> ans ;
        rev = revnum(ans) ;
        if ( ans == rev ){
            cout << "0 " << ans << endl ;
        }else {
            int cou = 0 ;
            while ( ans != rev ){
                ans += rev ;
                rev = revnum(ans) ;
                cou++ ;
            }
            cout << cou << " " << ans << endl ;
        }
    }
    return 0 ;
}

