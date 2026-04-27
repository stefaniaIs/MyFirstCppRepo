#include "lab1.h"
#include <iostream>
using namespace std;

void sum(money a, money b, money &c){
    c.grn = a.grn + b.grn;
    c.kop = a.kop + b.kop;

    if(c.kop >= 100){
        c.grn += c.kop / 100;
        c.kop = c.kop % 100;
    }
}

void res(money p, int kil, money &result){
    result.grn = p.grn * kil;
    result.kop = p.kop * kil;

    if(result.kop >= 100){
        result.grn += result.kop / 100;
        result.kop = result.kop % 100;
    }
}

void round_price(money p, money &r){
    int total = p.grn * 100 + p.kop;
    int last = total % 10;

    if(last <= 4) total -= last;
    else total += (10 - last);

    r.grn = total / 100;
    r.kop = total % 100;
}

void print(money m){
    cout << m.grn << " grn " << m.kop << " kop" << endl;
}