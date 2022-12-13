#ifndef LABB5_METODIK_FIND_IF_GREATER_H
#define LABB5_METODIK_FIND_IF_GREATER_H
#include "Book.h"
#include <vector>
#include <algorithm>


class find_if_greater {
public:
    find_if_greater(std::vector<Book> Book_vec, double predicate);
    find_if_greater(std::vector<Book> Book_vec,const std::string& predicate);
};





#endif //LABB5_METODIK_FIND_IF_GREATER_H
