#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> m ){
        map<string, float> mm ;
        FOR(i, 0, n){
            float pay ;
            string str ;
            cin >> str >> pay ;
            pay*=100 ;
            mm[str] = pay ;
        }
        cin.ignore() ;
        FOR(i, 0, m){
            string str2 ;
            getline(cin, str2) ;
            stringstream line ;
            line << str2 ;
            int sum = 0 ;
            char word[100] ;
            while ( line >> word ) {
                if ( strcmp(word, "<") == 0 ){
                    int nu ;
                    string a ;
                    line >> a ;
                    nu = stoi(a) ;
                    nu*=100 ;
                    if ( sum < nu ){
                        cout << "Guess #" << i+1 << " was correct." << endl ;
                    }else {
                        cout << "Guess #" << i+1 << " was incorrect." << endl ;
                    }
                    break ;
                }
                if ( strcmp(word, ">") == 0 ){
                    int nu ;
                    string a ;
                    line >> a ;
                    nu = stoi(a) ;
                    nu*=100 ;
                    if ( sum > nu ){
                        cout << "Guess #" << i+1 << " was correct." << endl ;
                    }else {
                        cout << "Guess #" << i+1 << " was incorrect." << endl ;
                    }
                    break ;
                }
                if ( strcmp(word, "<=") == 0 ){
                    int nu ;
                    string a ;
                    line >> a ;
                    nu = stoi(a) ;
                    nu*=100 ;
                    if ( sum <= nu ){
                        cout << "Guess #" << i+1 << " was correct." << endl ;
                    }else {
                        cout << "Guess #" << i+1 << " was incorrect." << endl ;
                    }
                    break ;
                }
                if ( strcmp(word, ">=") == 0 ){
                    int nu ;
                    string a ;
                    line >> a ;
                    nu = stoi(a) ;
                    nu*=100 ;
                    if ( sum >= nu ){
                        cout << "Guess #" << i+1 << " was correct." << endl ;
                    }else {
                        cout << "Guess #" << i+1 << " was incorrect." << endl ;
                    }
                    break ;
                }
                if ( strcmp(word, "=") == 0 ){
                    int nu ;
                    string a ;
                    line >> a ;
                    nu = stoi(a) ;
                    nu*=100 ;
                    if ( sum == nu ){
                        cout << "Guess #" << i+1 << " was correct." << endl ;
                    }else {
                        cout << "Guess #" << i+1 << " was incorrect." << endl ;
                    }
                    break ;
                }
                //cout << ":" << word << ":" << " = " << mm[word] << endl ;
                sum += mm[word] ;
            }
        }
    }
    return 0 ;
}
