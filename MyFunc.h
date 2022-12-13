#ifndef LABB5_METODIK_MYFUNC_H
#define LABB5_METODIK_MYFUNC_H
#include <iostream>

class MyFunc {

    friend struct ReplaceV;
};

struct ReplaceV {
    double sz;
    ReplaceV(double sz) : sz(sz) {};
    auto operator()(double i) const{
        return i-sz;
    }
};



#endif //LABB5_METODIK_MYFUNC_H
