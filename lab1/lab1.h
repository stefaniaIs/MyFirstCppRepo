#ifndef LAB1_H
#define LAB1_H

struct money{
    int grn;
    short kop;
};

void sum(money a, money b, money &c);
void res(money p, int kil, money &result);
void round_price(money p, money &r);
void print(money m);

#endif