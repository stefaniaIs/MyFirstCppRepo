#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H

class Newton_class{
    private:
    double x;
    double eps;
    double f(double x);
    double df(double x);
    public:
    void setX(double val_x);
    void setEps(double e);
    double count();
};

#endif