#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string key, value, str2 ;
    map<string, string> m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( getline(cin, str2) ){
        if ( str2 == "" ){
            break ;
        }
        stringstream s(str2) ;
        s >> key >> value ;
        m[value] = key ;
        //cout << value << endl ;
        s.clear() ;
    }
    string str ;
    while ( cin >> str ){
        if ( m.count(str) ){
           cout << m.find(str)->second << endl ;
        }else {
            cout << "eh" << endl ;
        }
    }
    return 0 ;
}

