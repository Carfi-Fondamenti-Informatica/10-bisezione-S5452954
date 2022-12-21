#include <iostream>
#include <cmath>
using namespace std;

float f( float a){
    float y=0;
    y= ((a*a)* cos(a))+1;
    return y;
}

int main() {
    float a=0, b=0, m=0,err=1;
    while((f(a)* f(b))>=0){
        cout<<"inserire estremi"<<endl;
        cin>>a>>b;
    }

    while (f(m)!=0){
        m=((a+b)/2);
        if ((f(m)*f(b))<0){
            a=m;
        }else{
            b=m;
        }
        err=((b-a)/2);
        if (err<(1e-6)){
            break;
        }
    }

    m=m*10000;
    m=(int)m;
    m=m/10000;
    cout<< m;


    return 0;
}
