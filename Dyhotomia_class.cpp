#include "Dyhotomia_class.h"
#include <iostream>
#include <cmath>

using namespace std;

double Dyhotomia_class::f(double x)
{
   return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
}

void Dyhotomia_class::setValues(double val_a, double val_b)
{
   a=val_a;
   b=val_b;
}

void Dyhotomia_class::setEps(double e)
{
    eps = e;
}

double Dyhotomia_class::count()
{
    if (f(a)*f(b)>=0)
    {
        cout << "Немає розв'язку\n";
        return 0;
    }

    double c;

    while ((b-a)>=eps)
    {
        c = (a+b)/2;

        if (f(a)*f(c)<0)
            b = c;
        else
            a = c;
    }

    return (a + b) / 2;
}