#include "find_if_greater.h"

find_if_greater::find_if_greater(std::vector<Book> Book_vec, double predicate) {

    auto index=[predicate](Book x){
        return x.get_number()> predicate;
    };

    std::vector<Book>::iterator it=std::find_if(std::begin(Book_vec),std::end(Book_vec),index);
    std::cout<<*it<<std::endl;
}

find_if_greater::find_if_greater(std::vector<Book> Book_vec, const std::string& predicate) {
    auto index=[predicate](Book x){
        return x.get_name()> predicate;
    };

    std::vector<Book>::iterator it=std::find_if(std::begin(Book_vec),std::end(Book_vec),index);
    std::cout<<*it<<std::endl;
}
