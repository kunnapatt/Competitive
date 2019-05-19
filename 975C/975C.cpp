#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vl vector<long long int>
int main(){
    int n, k ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> k ;
    vl part(n, 0) ;
    long long int sum = 0 ;
    FOR(i, 0, n){
        int in ;
        cin >> in ;
        sum += in ;
        part[i] = sum ;
    }
    long long int shot = 0 ;
    FOR(i, 0, n){
        long long m ;
        cin >> k ;
        shot += k ;
        if ( shot >= sum ){
            cout << n << "\n" ;
            shot = 0 ;
        }else {
            int inde = upper_bound(part.begin(), part.end(), shot) - part.begin() ;
            cout << n - inde << endl ;
        }
    }
    return 0 ;
}
