#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    map<string, int> m ;
    m["zero"] = 0 ;
    m["one"] = 1 ;
    m["two"] = 2 ;
    m["three"] = 3 ;
    m["four"] = 4 ;
    m["five"] = 5 ;
    m["six"] = 6 ;
    m["seven"] = 7 ;
    m["eight"] = 8 ;
    m["nine"] = 9 ;
    m["ten"] = 10 ;
    m["eleven"] = 11 ;
    m["twelve"] = 12 ;
    m["thirteen"] = 13 ;
    m["fourteen"] = 14 ;
    m["fifteen"] = 15 ;
    m["sixteen"] = 16 ;
    m["seventeen"] = 17 ;
    m["eighteen"] = 18 ;
    m["nineteen"] = 19 ;
    m["twenty"] = 20 ;
    m["thirty"] = 30 ;
    m["forty"] = 40 ;
    m["fifty"] = 50 ;
    m["sixty"] = 60 ;
    m["seventy"] = 70 ;
    m["eighty"] = 80 ;
    m["ninety"] = 90 ;
    m["hundred"] = 100 ;
    m["thousand"] = 1000 ;
    m["million"] = 1000000 ;
    m["negative"] = -1 ;
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( getline(cin, str) ){
        stringstream s(str) ;
        string str1 ;
        bool neg = false ;
        long sum = 0, temp = 0 ;
        long num = 0 ;
        while ( s >> str1 ){
            if ( str1 == "negative" ){
                neg = true ;
            }else if ( str1 == "million" ){
                sum += num * m[str1] ;
                num = 0 ;
            }else if ( str1 == "thousand" ){
                sum += num * m[str1] ;
                num = 0 ;
            }else if ( str1 == "hundred" ){
                num *= m[str1] ;
            }else {
                num += m[str1] ;
            }
        }
        sum += num ;
        if ( neg ){
            sum = -sum ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}




