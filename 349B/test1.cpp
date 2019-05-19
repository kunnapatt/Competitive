#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define printt(a) for(int i = 0 ; i < a.size() ; i++){ cout << a[i] ; }
int main(){
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(9) ;
    int mi = 10000000002 ;
    int pos = -1 ;
    FOR(i, 0, 9){
        cin >> a[i] ;
        mi = min(a[i], mi) ;
        if ( mi == a[i] ){
            pos = i ;
        }
    }
    int devid = n/mi ;
    int remain = n%mi ;
    if ( n == 0 || mi > n ){
        cout << "-1" << endl ;
        return 0 ;
    }else {
        vi b(devid, pos+1) ;
        for(int i = b.size()-1 ; i >= 0 ; i--){
            for(int j = 8 ; j >= 0 ; j--){
                    int chesum = remain - (a[j] - mi) ;
                if ( chesum >= 0){
                    b[i] = j+1 ;
                    remain = remain - (a[j] - mi) ;
                    //cout << i << ", " << remain << ", " << (a[j] - mi) << endl ;
                    break ;
                }

            }

        }
        //printt(b) ;

        sort(b.rbegin(), b.rend()) ;
        printt(b) ;
    }

    return 0 ;
}
