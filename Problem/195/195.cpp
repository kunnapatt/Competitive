#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

bool compare(char a, char b){
    if ( tolower(a) == tolower(b) ){
        return a < b ;
    }
    return tolower(a) < tolower(b) ;
}

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        string str[n] ;
        FOR(i, 0, n){
            cin >> str[i] ;
            sort(str[i].begin(), str[i].end(), compare) ;
            //cout << str[i] << endl ;
        }
        FOR(i, 0, n){
            string temp = str[i] ;
            do{
                cout << temp << endl ;
            }while ( next_permutation(temp.begin(), temp.end(), compare) ) ;
        }
    }
    return 0 ;
}



