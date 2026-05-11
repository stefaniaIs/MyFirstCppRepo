#include "Newton_class.h"
#include <iostream>
#include <cmath>

using namespace std;

double Newton_class::f(double x)
{
    return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
}
double Newton_class::df(double x){
    double h=0.0001;
    return (f(x+h)-f(x))/h;
}
void Newton_class::setX(double val_x){
    x=val_x;
}
void Newton_class::setEps(double e){
    eps=e;
}
double Newton_class::count(){
    double x1;
    while (fabs(f(x))>=eps){ // fabs - модуль числа
        if(df(x)==0){
            cout<<"Ділення на 0\n";
            return 0;
        }
        x1=x-f(x)/df(x);
        x=x1;
    }
    return x;
}