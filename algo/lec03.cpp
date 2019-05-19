#include <bits/stdc++.h>

using namespace std;

int main() {
    return 0;
}

/** basic string io */
void stringIO() {
    string w;
    cin >> w; /* read until whitespace */
    cout << w[0]; /* 0th character */
    cout << w.length();
    if (w == "hello") {
        /* string comparison */
    }
    /* 0 if equal, 1 if w after, -1 if w before */
    cout << w.compare("hello");
}

/** redirecting stdio to and from files */
void fileIOredir() {
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
}

/** read lines of strings */
void readLine() {
	int n;
	cin >> n;
	cin.ignore(); /* otherwise the first string read would be empty */
	scanf("%d\n", &n); /* or, we can use this instead of two lines above */
	for (int i = 0; i < n; i++) {
		string l;
		getline(cin, l);
		cout << l << endl;
	}
}

/** string tokenization */
void tokenization() {
	string s = "this is a long sentence";
	istringstream iss(s);
	string w;
	while (iss >> w)
		cout << w << endl;
}

