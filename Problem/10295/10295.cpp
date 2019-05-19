#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> m ){
        map<string, int> mm ;
        FOR(i, 0, n){
            string str ;
            int pay ;
            cin >> str >> pay ;
            mm[str] = pay ;
        }
        long sum = 0 ;
        string str2, word ;
        cin.ignore() ;
        while( m != 0 ){
            //cout << "A" << endl ;
            getline(cin, str2) ;
            stringstream s ;
            s << str2 ;
            while ( s >> word ){
                if ( mm.count(word) ){
                    sum+=mm[word] ;
                }
                if ( str2 == "." ){
                    m-- ;
                    cout << sum << endl ;
                    sum = 0 ;
                    break ;
                }
            }
        }
    }
    return 0 ;
}
