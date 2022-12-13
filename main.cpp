#include <iostream>
#include "Book.h"
#include "MyPrint.h"
#include "find_if_greater.h"
#include <vector>

int main() {

    Book arr[]={{"In Search of Lost Time ", 3},
                {"One Hundred Years of Solitude", 8.3},
                {"The Great Gatsby",15.01},
                {"Moby Dick", 7.8},
                {"War and Peace", 12.7},
                {"Moby Dick", 7.8},
                {"The Great Gatsby", 3}};




    std::vector<Book> book_vec(std::begin(arr), std::end(arr)); // copy into vector
    MyPrint print_vec(book_vec);                                //print out the vector
    std::cout<<"----------------------------------------------------"<<std::endl;


    find_if_greater search(book_vec,9);
    find_if_greater search2(book_vec,"Isaac");

    std::cout<<"----------------------------------------------------"<<std::endl;

   auto it= std::adjacent_find(book_vec.begin(),book_vec.end(),first());
    if(it== book_vec.end()){
        std::cout<<" No matches found: "<<*it<<std::endl;
    } else
    std::cout<<" The value is: "<<*it<<std::endl;

    std::cout<<"----------------------------------------------------"<<std::endl;


    if ( std::equal (book_vec.begin(), book_vec.end(), arr) )
        std::cout << "The contents of both sequences are equal.\n";
    else
        std::cout << "The contents of both sequences differ.\n";

    std::cout<<"----------------------------------------------------"<<std::endl;
    //std::search(book_vec.begin(),book_vec.end(),)


    return 0;
}

