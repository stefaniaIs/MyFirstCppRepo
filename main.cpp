#include <iostream>
#include "Dyhotomia_class.h"

using namespace std;

int main(){
    Dyhotomia_class obj;
    double eps;
  
    cout <<"введіть eps:";
    cin>>eps;

    obj.setValues(2, 3);
    obj.setEps(eps);

    double root=obj.count();

    cout<<"корінь:"<<root<<endl;
    return 0;
}