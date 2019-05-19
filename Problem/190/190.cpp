
#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    double x1, y1, x2, y2, x3, y3 ;
    freopen("../test.in", "r", stdin) ;

    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> x1 >> y1 ){
        cin >> x2 >> y2 ;
        cin >> x3 >> y3 ;
        double A = x1*(y2 - y3) - y1*(x2 - x3) + x2*y3 - x3*y2 ;
        double B = (x1*x1 + y1*y1)*(y3 - y2) + (x2*x2 + y2*y2)*(y1 - y3) + (x3*x3 + y3*y3)*(y2 - y1) ;
        double C = (x1*x1 + y1*y1)*(x2 - x3) + (x2*x2 + y2*y2)*(x3 - x1) + (x3*x3 + y3*y3)*(x1 - x2) ;
        double D = (x1*x1 + y1*y1)*(x3*y2 - x2*y3) + (x2*x2 + y2*y2)*(x1*y3 - x3*y1) + (x3*x3 + y3*y3)*(x2*y1 - x1*y2) ;
        double x = -B/(2*A) ;
        double y = -C/(2*A) ;
        double r = pow((B*B+C*C-4*A*D)/(4*A*A), 0.5) ;
        bool ope1 = false, ope2 = false ;
        char ch1, ch2, ch3 ;
        if ( B/A < 0 ){
            ch1 = '-' ;
        }else {
            ch1 = '+' ;
        }
        if ( C/A < 0 ){
            ch2 = '-' ;
        }else {
            ch2 = '+' ;
        }
        if ( D/A < 0 ){
            ch3 = '-' ;
        }else {
            ch3 = '+' ;
        }
        double ix = x, iy = y, ica = C/A, iba = B/A, ida = D/A ;
        cout <<  "1, " << B/A << ", " << C/A << ", " << D/A << ", " << x << ", " << y << ", " << r << endl ;
        if ( ix * 100 == 0 ){
            if ( iba * 100 == 0 ){
                printf("x^2 + (y %c %.3f)^2 = %.3f^2\n", ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fy %c %.3f = 0\n", ch2, abs(C/A), ch3, abs(D/A)) ;
            }else if ( ica * 100 == 0 ){
                printf("x^2 + (y %c %.3f)^2 = %.3f^2\n", ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3f = 0\n", ch1, abs(B/A), ch3, abs(D/A)) ;
            }else if ( ida * 100 == 0 ){
                printf("x^2 + (y %c %.3f)^2 = %.3f^2\n", ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3fy = 0\n", ch1, abs(B/A), ch2, abs(C/A)) ;
            }else {
                printf("x^2 + (y %c %.3f)^2 = %.3f^2\n", ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3fy %c %.3f = 0\n", ch1, abs(B/A), ch2, abs(C/A), ch3, abs(D/A)) ;
            }
        }else if ( iy * 100 == 0 ){
            if ( iba * 100 == 0 ){
                printf("(x %c %.3f)^2 + y^2 = %.3f^2\n", ch1, abs(x), abs(r)) ;
                printf("x^2 + y^2 %c %.3fy %c %.3f = 0\n", ch2, abs(C/A), ch3, abs(D/A)) ;
            }else if ( ica * 100 == 0 ){
                printf("(x %c %.3f)^2 + y^2 = %.3f^2\n", ch1, abs(x), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3f = 0\n", ch1, abs(B/A), ch3, abs(D/A)) ;
            }else if ( ida * 100 == 0 ){
                printf("(x %c %.3f)^2 + y^2 = %.3f^2\n", ch1, abs(x), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3f = 0\n", ch1, abs(B/A), ch2, abs(C/A)) ;
            }else {
                printf("(x %c %.3f)^2 + y^2 = %.3f^2\n", ch1, abs(x), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3fy %c %.3f = 0\n", ch1, abs(B/A), ch2, abs(C/A), ch3, abs(D/A)) ;
            }
        }else if ( ica * 100 == 0 ){
            printf("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2\n", ch1, abs(x), ch2, abs(y), abs(r)) ;
            printf("x^2 + y^2 %c %.3fx %c %.3f = 0\n", ch1, abs(B/A), ch3, abs(D/A)) ;
        }else if ( iba * 100 == 0 ){
            printf("(x %c %.3f)^2 + y^2 = %.3f^2\n", ch1, abs(x), ch2, abs(y), abs(r)) ;
            printf("x^2 + y^2 %c %.3fy %c %.3f = 0\n", ch2, abs(C/A), ch3, abs(D/A)) ;
        }else if ( ida * 100 == 0 ){
            if ( ix * 100 == 0 ){
                printf("x^2 + (y %c %.3f)^2 = %.3f^2\n", ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3fy = 0\n", ch1, abs(B/A), ch2, abs(C/A)) ;
            }else if ( iy * 100 == 0 ){
                printf("(x %c %.3f)^2 + y^2 = %.3f^2\n", ch1, abs(x), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3fy = 0\n", ch1, abs(B/A), ch2, abs(C/A)) ;
            }else if ( iba * 100 == 0 ){
                printf("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2\n", ch1, abs(x), ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fy = 0\n", ch2, abs(C/A)) ;
            }else if ( ica * 100 == 0 ){
                printf("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2\n", ch1, abs(x), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx= 0\n", ch1, abs(B/A)) ;
            }else {
                printf("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2\n", ch1, abs(x), ch2, abs(y), abs(r)) ;
                printf("x^2 + y^2 %c %.3fx %c %.3fy = 0\n", ch1, abs(B/A), ch2, abs(C/A)) ;
            }
        }else {
            printf("(x %c %.3f)^2 + (y %c %.3f)^2 = %.3f^2\n", ch1, abs(x), ch2, abs(y), abs(r)) ;
            printf("x^2 + y^2 %c %.3fx %c %.3fy %c %.3f = 0\n", ch1, abs(B/A), ch2, abs(C/A), ch3, abs(D/A)) ;
        }
        cout << endl ;
        //cout << "x^2 + y^2 " <<
    }
    return 0 ;
}







