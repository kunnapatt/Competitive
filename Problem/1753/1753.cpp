#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, t ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> t ){
        vi a(n), b(n) ;
        double mi = 10000000000 ;
        FOR(i, 0, n){
            cin >> a[i] >> b[i] ;
            mi = min((double)b[i], mi) ;
        }
        //double ans = -10000000000000 ;
        double l = -mi, r = 1000000000, mid, sum ;
        FOR(j, 0, 80){
        //while ( sum != t ){
            mid = (l+r)/2 ;
            sum = 0 ;
            FOR(i, 0, n){
                sum+=(((double)a[i])/((double)b[i]+mid)) ;
            }
            if ( sum > (double)t ) l = mid ;
            else if ( sum < (double)t ) r = mid ;
            //printf("%.20f\t", sum) ;
            //cout << sum << endl ;
            //printf("l = %.20f\t", l) ;
            //\printf("r = %.20f\n", r) ;
        //}
        }
        printf("%.10f\n", l) ;
        //printf("%.20f\n", r) ;
        //cout << l << endl ;
        //cout << r << endl ;
    }
}


