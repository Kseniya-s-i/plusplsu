#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int a, b, c, d, e, r, p, x1, q, x2, y2, x3, y3;
int trngl() {
    cin >> x1 >> q >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x1 - x2)*(x1 - x2) + (q - y2)*(q - y2));
    b = sqrt((x1 - x3)*(x1 - x3) + (q - y3)*(q - y3));
    c = sqrt((x2 - x3)*(x2 - x3) + (y3 - y2)*(y3 - y2));
    d = a + b;
    e = c + b;
    r = a + c;
    p = (a + b + c) / 2;
    if (d > c) {
        if (e > a){
            if (r > b){
                cout << "Exist" << endl;
                cout << sqrt(p * (p-a)*(p-b)*(p-c));
                return 0;
            }
        }
    }

    cout << "No existance";

    return 0;
}
