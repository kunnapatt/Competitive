#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int cal(string str){
    int sumstr = 0 ;
    FOR(i, 0, str.length()){
        if ( islower(str[i]) ){
            sumstr += (str[i] - '`') ;
        }else if ( isupper(str[i]) ){
            sumstr += (str[i] - '@') ;
        }

    }
    if ( sumstr%9 == 0 ){
        sumstr = 9 ;
    }else {
        sumstr %= 9 ;
    }
    return sumstr ;
}

int main() {
    string name1, name2 ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while( getline(cin, name1) ){
        getline(cin,name2) ;
        float na1 = cal(name1) ;
        float na2 = cal(name2) ;
        if ( na1 > na2 ){
            printf("%.2f %\n", (na2/na1)*100) ;
        }else {
            printf("%.2f %\n", (na1/na2)*100) ;
        }
    }
    return 0 ;
}


