#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n && n != 0 ){
        vi a(5) ;
        char str[30] ;
        map<string, int> mm ;
        FOR(i, 0, n){
            cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] ;
            sort(a.begin(), a.end()) ;
            sprintf(str, "%d%d%d%d%d", a[0], a[1], a[2], a[3], a[4]) ;
            string str2 = str ;
            mm[str2]++ ;
        }
        int ma = -1, maxN = 0 ;
        for(auto a:mm){
            if ( a.second > ma ){
                ma = a.second ;
                maxN = 0 ;
            }
            if ( a.second == ma ){
                maxN += ma ;
            }
        }
        cout << maxN << endl ;
    }
    return 0 ;
}
