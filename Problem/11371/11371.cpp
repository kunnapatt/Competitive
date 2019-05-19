#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> str ){
        string oristr = str, dststr = str ;
        sort(dststr.begin(), dststr.end()) ;
        //cout << dststr << endl ;
        if ( dststr[0] == '0' ){
            FOR(i, 0, dststr.length()){
                if ( dststr[i] != '0' ){
                    swap(dststr[0], dststr[i]) ;
                    break ;
                }
            }
        }
        sort(oristr.rbegin(), oristr.rend()) ;
        long a = stoll(oristr), b = stoll(dststr) ;
        cout << oristr << " - " << dststr << " = " << a-b << " = 9 * " << (a-b)/9 << endl;
    }
    return 0 ;
}







