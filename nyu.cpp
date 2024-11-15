#include<iostream>
using namespace std;

double f(double x){
    return x*x-2;
}

double f2(double x){
    return 2*x;
}

int main(){
    double x = 10000;

    for(int i = 0; i < 100; i++){
        x = x - f(x)/f2(x);
        printf("%.9lf\n",x);
    }

    return 0;
}