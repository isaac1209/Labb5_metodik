#ifndef LABB5_METODIK_MYBINOP_H
#define LABB5_METODIK_MYBINOP_H
#include "Book.h"

class MyBinOp {
public:

    friend struct My_bin_op;
};

struct My_bin_op {
    size_t sz;
    My_bin_op(size_t sz) : sz(sz) {};
    auto operator()(double i, Book& m){
        return i += m.get_number()/sz;
    }
};


#endif //LABB5_METODIK_MYBINOP_H
