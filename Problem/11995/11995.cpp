
#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long longW


bool checkqueue(queue<int> qu, int n){
    queue<int> q = qu ;
    if ( q.front() == n && !q.empty() ){
        return true ;
    }else {
        return false ;
    }

}

bool checkstack(stack<int> sta, int n){
    stack<int> s = sta ;
    if ( s.top() == n && !s.empty() ){
        return true ;
    }else {
        return false ;
    }
}

bool checkpriortyqueue(priority_queue<int> pri, int n){
    priority_queue<int> p = pri ;
    if ( p.top() == n && !p.empty() ){
        return true ;
    }else {
        return false ;
    }
}

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n && ( n >= 1 && n <= 10000 ) ){
        queue<int> q ;
        stack<int> stac ;
        priority_queue<int> priorq ;
        int cha, inpu ;
        bool isq = false, isstack = false, ispriorityq = false ;
        FOR(i, 0, n){
            cin >> cha >> inpu ;
            if ( cha == 1 ){
                q.push(inpu) ;
                stac.push(inpu) ;
                priorq.push(inpu) ;
            }else if ( cha == 2 ){
                if ( !isq ){
                    if ( !q.empty() && q.front() == inpu ){
                        q.pop() ;
                    }else {
                        isq = true ;
                    }
                }

                if ( !isstack ){
                    if ( !stac.empty() && stac.top() == inpu ){
                        stac.pop() ;
                    }else {
                        isstack = true ;
                    }
                }
                if ( !ispriorityq ){
                    if ( !priorq.empty() && priorq.top() == inpu ){
                        priorq.pop() ;
                    }else {
                        ispriorityq = true ;
                    }
                }

            }
        }
        if ( isq != true && isstack != false && ispriorityq != false ){
            cout << "queue" << endl ;
        }else if ( isq != false && isstack != true && ispriorityq != false ){
            cout << "stack" << endl ;
        }else if ( isq != false && isstack != false && ispriorityq != true ){
            cout << "priority queue" << endl ;
        }else if ( isq != false && isstack != false && ispriorityq != false ){
            cout << "impossible" << endl ;
        }else {
            cout << "not sure" << endl ;
        }
    }
    return 0 ;
}






