#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

 int main(){
    int a, b, c ;
    char op, ch[10000] ;
    //string str ;
    int cou = 0 ;
    while ( scanf("%d%c%d=%s", &a, &op, &b, ch) != EOF ){
        if ( op == '+' ){
            if ( a + b == atoi(ch) ){
                cou++ ;
            }
        }else if ( op == '-' ){
            if ( a - b == atoi(ch) ){
                cou++ ;
            }
        }
    }
    cout << cou << endl ;
    return 0 ;
}




