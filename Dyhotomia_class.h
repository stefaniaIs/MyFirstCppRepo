#ifndef DYHOTOMIA_CLASS_H
#define DYHOTOMIA_CLASS_H

class Dyhotomia_class{
    private:
    double a, b, eps;

    double f(double x);

    public:
    void setValues(double val_a, double val_b);
    void setEps(double e);

    double count();
};

#endif