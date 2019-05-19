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
    while ( cin >> n ){
        cin.ignore() ;
        cin.ignore() ;
        FOR(i, 0, n){

            string str ;
            map<string, float> m ;
            int cou = 0 ;
            while ( getline(cin, str) && str != "" ){
                m[str]++ ;
                cou++ ;
            }
            for(auto a:m){
                //printf("%s %3.4f\n", a.first, (a.second/cou) * 100) ;
                cout << a.first << " " << fixed << setprecision(4) << (a.second/cou) *100 << endl ;
            }
            if ( i != n-1 ){
                cout << endl ;
            }
        }

    }
    return 0 ;
}






