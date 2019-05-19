#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    while ( cin >> n ){
        cin.ignore() ;
        stack<string> sta ;
        FOR(i, 0, n){
            string str ;
            getline(cin, str) ;
            stringstream s(str) ;

            string word ;
            while ( s >> word ){
                if ( word == "pwd" ){
                    stack<string> tempsta = sta ;
                    stack<string> tempsta2 ;
                    while ( !tempsta.empty() ){
                        //cout << "/" << tempsta.top() ;
                        tempsta2.push(tempsta.top()) ;
                        tempsta.pop() ;
                    }
                    if ( !tempsta2.empty() ){
                        while ( !tempsta2.empty() ){
                            cout << "/" << tempsta2.top() ;
                            tempsta2.pop() ;
                        }
                    }
                    cout << "/" << endl ;
                }else if ( word == "cd" ){
                    while ( s >> word ) {
                        if ( word[0] == '/' ){
                            while ( !sta.empty() ){
                                sta.pop() ;
                            }
                        }
                        FOR(i, 0, word.length()){
                            if ( word[i] == '.' && word[i+1] == '.' ){
                                i++ ;
                                if ( !sta.empty() ){
                                    sta.pop() ;
                                }
                            }else if ( word[i] == '/' && i != word.length()-1 ){
                                string sstr = "" ;
                                //cout << word[i] << endl ;
                                FOR(j, i+1, word.length()){
                                    if ( word[j] == '/' ){
                                        i = j ;
                                        //cout << i << endl ;
                                        break ;
                                    }
                                    //cout << word[j] << endl ;
                                    sstr += word[j] ;
                                }
                                sta.push(sstr) ;

                            }
                            if ( !sta.empty() ){
                                cout << sta.top() << endl ;
                            }

                        }
                    }
                }
            }
        }
    }
    return 0 ;
}

