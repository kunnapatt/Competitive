#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int w, h, n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> w >> h >> n ){
        if ( w == 0 || h == 0 ){
            break ;
        }
        int x1, y1, x2, y2 ;
        int spot[w][h] ;
        memset(spot, 0, sizeof(spot)) ;
        FOR(i, 0, n){
            cin >> x1 >> y1 >> x2 >> y2 ;
            if ( x1 > x2 ) swap(x1, x2) ;
            if ( y1 > y2 ) swap(y1, y2) ;
            FOR(j, x1-1, x2){
                FOR(k, y1-1, y2){
                    spot[j][k] = 1 ;
                }
            }
        }
        int ans = 0 ;
        FOR(i, 0, w){
            FOR(j, 0, h){
                if ( spot[i][j] == 0 ){
                    ans+=1 ;
                }
            }
        }
        if ( ans == 1 ){
            cout << "There is one empty spot.\n" ;
        }else if ( !ans ){
            cout << "There is no empty spots.\n" ;
        }else {
            cout << "There are " << ans << " empty spots.\n" ;
        }
        //cout << "B" << endl ;
        //cin.ignore() ;
    }
    return 0 ;
}
