#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string str ;
    while ( cin >> str ){
        if ( str == "start" ){
            long current = 1, prev = 0 ;

            char ch ;
            FOR(i, 0, 30){
                cout << "? " << prev << " " << current << endl ;
                cin >> ch ;
                if ( ch == 'x'){
                    break ;
                }
                prev = current ;
                current *= 2 ;
            }
            long l = prev, r = current ;
            while ( l < r ) {
                long mid = (l+r)/2 ;
                cout << "? " << prev << " " << mid << endl ;
                cin >> ch ;
                if ( ch == 'x' ){
                    r = mid ;
                }else if ( ch == 'y' ){
                    l = mid+1 ;
                }
            }
            cout << "! " << r << endl ;
        }else if ( str == "e" || str == "end" || str == "mistake" ){
            break ;
        }
    }
    return 0 ;
}

