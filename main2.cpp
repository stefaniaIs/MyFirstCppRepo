#include <iostream>
#include "Newton_class.h"

using namespace std;

int main()
{
    Newton_class obj;

    double eps;

    cout << "Введіть eps: ";
    cin >> eps;

    obj.setX(2.5);

    obj.setEps(eps);

    double root = obj.count();

    cout << "Корінь: " << root << endl;

    return 0;
}
