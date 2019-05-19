#include <bits/stdc++.h>

using namespace std ;

class TrieNode{
public:
    map<char, TrieNode*> children ; // node to node ( node pointer node )
    bool endOfWord ;
};

class Trie{
    TrieNode *root = new TrieNode ;
public:
    void insert(string s){
        TrieNode *n = root ;
        for (char c : s){
            if ( n->children.find(c) == n->children.end()) {
                //add child
                n->children[c] = new TrieNode() ;
            }
            n = (*n).children[c] ;
        }
        n->endOfWord = true ;
    }

    bool find(string s){
        TrieNode *n = root ;
        for (char c : s){
            if ( n->children.find(c) == n->children.end()){
                return false ;
            }
            n = n->children[c] ;
        }
        return (*n).endOfWord ;
    }

    void printAll(){
        vector<char> word ;
        printAll(root, word) ;
    }

    void printAll(TrieNode *n,vector<char> word){
        if ( n->endOfWord ){
            for (char c : word){
                cout << c ;
            }
            cout << "\n" ;
        }
        for (auto p:n->children){
            word.push_back(p.first) ;
            printAll(p.second, word) ;
            word.pop_back() ;
        }
    }
};

int main() {
    Trie t ;
    t.insert("hello") ;
    t.insert("hell") ;
    cout << t.find("hello") << endl ;

    t.printAll() ;
    return 0 ;
}
