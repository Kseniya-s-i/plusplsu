#include <iostream>
using namespace std;
#include <string>
#include <math.h>
int a, b, c,d , e , r, p;
int gcd() {
    cin >> a, b;
    while (b != 0){
        c = b;
        b = a % c;
        a = b;
    }
    cout << a;
    return 0;
}

