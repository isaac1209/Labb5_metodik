#ifndef LABB5_METODIK_MYUNOP_H
#define LABB5_METODIK_MYUNOP_H
#include "Book.h"

class MyUnOp {
friend struct UnOP;
};
struct UnOP{
    auto operator()(Book value){
        return value.get_number();
    }
};

#endif //LABB5_METODIK_MYUNOP_H
