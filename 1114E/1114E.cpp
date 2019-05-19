#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int main(){
    int n ;
    while ( cin >> n ){
        int query = 60 ;
        int respon ;
        int l = 0, r = 1e9 ;
        while ( l < r && query > 0 ){
            int mid = (l+r+1)/2 ;
            cout << "> " << mid << endl ;
            cin >> respon ;
            if ( respon == 0 ){
                r = mid-1 ;
            }else if ( respon == 1 ){
                l = mid ;
            }
            query-- ;
        }
        int mx = l+1 ;
        int ai ;
        int d = 0 ;
        ////cout << "max = " << mx << endl ;
        map<int, bool> mp ;
        while(query--){
            int randommt = (rng()%n) + 1 ;
            if ( mp.count(randommt) == 0 ){
                cout << "? " << randommt << endl ;
                cin >> ai ;
                if ( d == 0 ){
                    d = mx-ai ;
                }else {
                    d = __gcd(d, mx-ai) ;
                }
                mp[randommt]=1 ;
            }
            if ( mp.size() == n ){
                break ;
            }
        }
        int a1 = mx - (n-1)*d ;
        cout << "! " << a1 << " " << d << endl ;
        break ;
    }
    return 0 ;
}

