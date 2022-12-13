#include "Book.h"
Book::Book(std::string book_name, double page_number):
        book_name(std::move(book_name)),page_number(page_number){}

bool operator==(Book& lhs, Book& rhs){
    if(lhs.book_name==rhs.book_name){
        return true;
    }
    return false;
}


std::ostream & operator<<(std::ostream& cout, Book& p){
    cout<<p.book_name<<", "<<p.page_number<<", "<<std::endl;
    return cout;
}

std::string Book::get_name() {
    return book_name;
}

double Book::get_number() {
    return page_number;
}



