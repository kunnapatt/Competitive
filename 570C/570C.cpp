#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vs vector<string>

int main(){
    int n, m ;
    freopen("test.in", "r", stdin) ;
    string str ;
    char ca ;
    cin >> n >> m ;
      vi a(m) ;
    vs as(m) ;
    FOR(i, 0, n){
        cin >> ca ;
        str += ca ;
    }
    //cout << str << endl ;
    int couq = 0 ;
    FOR(i, 0, str.length()){
        if ( str[i-1] == '.' && str[i] == '.' ){
            couq++ ;
        }
    }
    a[0] = couq ;
    //vi a(m, couq) ;
    //cout << couq << endl ;
    FOR(i, 0, m){
        int pos ;
        char cha ;
        cin >> pos >> cha ;

        if ( pos >= 2 ){
        //cout << "strpos-2 = " << str[pos-2] << ", strpos-1 = " << str[pos-1] << endl ;

            if ( (str[pos-2] == '.' && str[pos-1] == '.' || (str[pos-1] == '.' && str[pos] == '.') ) ){
                if ( i > 0 ){
                    //cout << "B" << endl ;
                    //cout << a[i] << endl ;
                    a[i] = a[i-1] - 1  ;
                    //cout << a[i] << endl ;
                }
                //cout << "C" << endl ;
            }else {
                a[i] = a[i-1] + 1 ;
            }

            //cout << "A" << endl ;
        }
        str[pos-1] = cha ;
        cout << str <<  endl ;
        cout << a[i] << endl ;;
    }


    FOR(i, 0, m){
        //cout << a[i] << "\n" ;
    }
    return 0 ;
}
