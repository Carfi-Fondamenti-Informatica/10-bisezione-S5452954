#include <iostream>
#include <cmath>
using namespace std;

double f (float num) {
    return (pow(num, 2) * cos(num) + 1);
}

int main() {

    float a=0, b=0, x, err=0;

    cout << "inserire estremi";
    cin >> a >> b;

    while (f(a)*f(b)>=0) {
        cout << "inserire estremi";
        cin >> a >> b;
    }

    do {
        x = (a + b) / 2;

        if (f(x) == 0) {
            cout << x;
            cout << f(x);
        } else {
            if (f(a) * f(b) < 0) {
                b = x;
            } else a = x;

            err = abs((b - a) / 2);
        }
    } while (err >= 1/pow(2.7, 6));

    cout << x;
    cout << f(x);




    return 0;
}
