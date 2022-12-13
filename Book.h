#ifndef LABB5_METODIK_BOOK_H
#define LABB5_METODIK_BOOK_H
#include <iostream>
class Book {
private:
std::string book_name;
double page_number;

public:
    Book(std::string book_name,double page_number);
    friend bool operator==(Book& lhs, Book& rhs);
    friend std::ostream & operator<<(std::ostream& cout, Book& p);
    std::string get_name();
    double get_number();
    friend struct first;

};

struct first{
    bool operator()(Book p1, Book p2){

        if(p1.book_name>p2.book_name){
            return p1.book_name>p2.book_name;
        }
        return false;
    }

};



#endif //LABB5_METODIK_BOOK_H
