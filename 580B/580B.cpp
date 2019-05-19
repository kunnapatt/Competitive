#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n, d ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> d ){
        vector< pair<int, int> > vii ;
        FOR(i, 0, n){
            int in1, in2 ;
            cin >> in1 >> in2 ;
            vii.push_back( make_pair(in1, in2) ) ;
        }
        int i = 0, cou = 0 ;
        sort(vii.begin(), vii.end()) ;
        long sum = 0, ans = 0 ;
        while ( i < n ){
            if ( vii[i].first - vii[cou].first < d ){
                sum += vii[i].second ;
                i++ ;
            }else {
                sum -= vii[cou].second ;
                cou++ ;
            }
            ans = max(ans, sum) ;
        }

        cout << ans << endl ;
    }
    return 0 ;
}
