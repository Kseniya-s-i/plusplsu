#include <iostream>
using namespace std;
#include <string>
#include <math.h>
int a, b, c,d , e , r, p;
int main() {
    cin >> a >> b >> c;
    d = a + b;
    e = c + b;
    r = a + c;
    if (d > c) {
        if (e > a){
            if (r > b){
                cout << "Exist" << endl;
                return 0;
            }
        }
    }

    cout << "No existance";

    return 0;
}
