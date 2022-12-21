#include <iostream>
#include <cmath>
using namespace std;

double f (float num) {
    double fx = (pow(num, 2) * cos(num) + 1);
    return fx;
}

int main() {

    float a=0, b=0, x, err=1;

    cout << "inserire estremi";
    cin >> a >> b;

    while (f(a)*f(b)>=0) {
        cout << "inserire estremi";
        cin >> a >> b;
    }

    do {
        x = (a + b) / 2;

        if (f(x) == 0) {
            x = x*10000;
            x =(int)x;
            x = x/10000;
            cout << x;

        } else {
            if (f(a) * f(b) < 0) {
                b = x;
            } else a = x;

            err = abs((b - a) / 2);
        }
    } while (err >= 1e-6);

    x = x*10000;
    x =(int)x;
    x = x/10000;
    cout << x;
    
    
    return 0;
}
