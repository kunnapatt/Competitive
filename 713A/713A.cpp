#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vs vector<string>

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    map<long long int, int> m ;
    FOR(i, 0, n){
        char op ;
        string in ;
        cin >> op >> in ;
        string a ;
        FOR(j, 0, in.length()){
            if ( in[j] % 2 == 0 ){
                a += '0' ;
            }else if ( in[j] % 2 != 0 ){
                a += '1' ;
            }
        }
        if ( op == '+' ){
            m[stoll(a)]++ ;
        }else if ( op == '-' ){
            m[stoll(a)]-- ;
        }else if ( op == '?' ){
            cout << m[stoll(a)] << endl ;
        }
        //cout << m.size() << endl ;
        //cout << "------" << endl ;
    }

    return 0 ;
}

