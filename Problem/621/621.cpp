#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    char str[2000] ;
    //freopen("../test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        scanf("%s", str) ;
        int leng = strlen(str) ;
        if ( strcmp(str, "1") == 0 || strcmp(str, "4") == 0 || strcmp(str, "78") == 0){
            cout << "+" << endl ;
        }else if ( str[leng-2] == '3' && str[leng-1] == '5' ){
            cout << "-" << endl ;
        }else if ( str[0] == '9' && str[leng-1] == '4' ){
            cout << "*" << endl ;
        }else if ( str[0] == '1' && str[1] == '9' && str[2] == '0' ){
            cout << "?" << endl ;
        }else {
            cout << "+" << endl ;
        }
    }
    return 0;
}
