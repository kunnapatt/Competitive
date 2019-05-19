#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

bool mirror(string str){
    char from[] = {'A', 'E', 'H', 'I', 'J', 'L', 'M', 'O', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '5', '8'} ;
    char to[] =   {'A', '3', 'H', 'I', 'L', 'J', 'M', 'O', '2', 'T', 'U', 'V', 'W', 'X', 'Y', '5', '1', 'S', 'E', 'Z', '8'} ;
    string oristr = str ;
    reverse(str.begin(), str.end()) ;

    for( int i =  0 ; i < str.length() ; i++ ){
        for(int j = 0 ; j < sizeof(from)/sizeof(from[0]) ; j++){
            if (oristr[i] == from[j]){
                oristr[i] = to[j] ;
                break ;
            }
        }
        int cou = 0 ;
        for(int j = 0 ; j < sizeof(from)/sizeof(from[0]) ; j++){
            if ( str[i] == from[j] ){
                cou++ ;
                break ;
            }
        }
        if ( oristr[i] != str[i] || cou == 0 ){
            return false ;
        }
        //cout << oristr[i] << endl ;
    }
    return true ;
}

bool palin(string str){ // palindrome read forward and backward same meaning
    string rev = str ;
    reverse(str.begin(), str.end()) ;
    if ( str == rev ){
        return true ;
    }
    return false ;
}

int main(){
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> str ){
        if ( palin(str) && mirror(str) ) {
            cout << str << " -- is a mirrored palindrome." << endl << endl ;
        }else if ( palin(str) && !mirror(str) ){
            cout << str << " -- is a regular palindrome." << endl << endl  ;
        }else if ( !palin(str) && mirror(str) ){
            cout << str << " -- is a mirrored string." << endl << endl  ;
        }else if ( !palin(str) && !mirror(str) ){
            cout << str << " -- is not a palindrome." << endl << endl ;
        }
    }
    return 0 ;
}






