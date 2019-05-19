#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    //set<int, int> s ;

    map<int, int> ms ;
    //map<int, int> coms(ms.begin(), ms.end()) ;
    vi a(9) ;
    FOR(i, 0, 9){
        int in ;
        cin >> in ;
        ms.erase(in) ;
        ms[in] = i+1 ;
    }
    if ( n == 0 ){
        cout << "-1" << endl ;
        return 0 ;
    }
    int maxx = -1 ;
    map<int, map<int, int>> copms ;
    for(auto ma:ms){
        int co = 0 ;
        if ( ma.first <= n ){
            int coi = n/ma.first ;
            float cof = (n*1.0/ma.first) ;
            float sumif = abs(coi-cof) ;
            if (sumif >= 0.5){
                coi = coi+1 ;
            }
            FOR(i, 0, coi){
                co++ ;
            }

            copms[ma.first][ma.second] = co ;
            maxx = max(maxx, co) ;

        }
    }
    for(auto ma:copms){
        for(auto mas: ma.second ){
            if ( mas.second == maxx ){
                FOR(i, 0, maxx){
                    cout << mas.first ;
                    break ;
                }
            }
        }
    }



    return 0 ;
}
