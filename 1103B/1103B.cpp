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
            int prev = 0, cur = 1 ;
            char ch ;
            FOR(i, 0, 31){
                cout << "? " << prev << " " << cur << endl ;
                cin >> ch ;
                if ( ch == 'x' ){
                    break ;
                }
                prev = cur ;
                cur *= 2 ;
            }
            long l = prev+1, r = cur ;
            while ( l < r ){
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
        }else if ( str == "e" || str == "mistake" || str == "end" ){
            break ;
        }
    }
    return 0 ;
}

