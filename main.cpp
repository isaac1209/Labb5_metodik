#include <iostream>
#include "Book.h"
#include "MyPrint.h"
#include "find_if_greater.h"
#include <vector>
#include <numeric>
#include "MyBinOp.h"
#include "MyUnOp.h"
#include "MyFunc.h"
int main() {

    Book book_arr[]={{"In Search of Lost Time ", 3},{"Moby Dick", 8},{"War and Peace", 13},
                {"Moby Dick", 7},{"The Great Gatsby",15},{"One Hundred Years of Solitude", 200},
                {"The Great Gatsby", 3}};


///
    std::cout<<"-----------------------TASK 1----------------------------"<<"\n\n";
    std::vector<Book> book_vec(std::begin(book_arr), std::end(book_arr)); // copy into vector
    MyPrint print_vec(book_vec);                                //print out the vector
    std::cout<<"-----------------------TASK 2----------------------------"<<"\n\n";

    find_if_greater search(book_vec,9);                     //test for a double parameter
    find_if_greater search2(book_vec,"Isaac");              //test with a string

    std::cout<<"-----------------------TASK 3----------------------------"<<"\n\n";
   auto it= std::adjacent_find(book_vec.begin(),book_vec.end(),first()); // liter två elementer som uppreppar sig i en container och retunerar en pekare till den första element
    if(it== book_vec.end()){

        std::cout<<" No matches found: "<<std::endl;
    } else
    std::cout<<" The value is: "<<*it<<std::endl;

    std::cout<<"-----------------------TASK 4----------------------------"<<"\n\n";

    if ( std::equal (book_vec.begin(), book_vec.end(), book_arr) )           // kollar om innehållet i vectorn och arrayen är samma
        std::cout << "The contents of both sequences are equal.\n";
    else
        std::cout << "The contents of both sequences differ.\n";

    std::cout<<"-----------------------TASK 5----------------------------"<<"\n\n";

    auto it_2=std::search(book_vec.begin(),book_vec.end(),book_arr, book_arr+5); // liter efter en sekvence i en viss interval i vektorn
    if(it_2== book_vec.end()){                                                   //tror inte att den funkar som den skulle
        std::cout<<" No matches found:"<<"\n\n";
    } else
        std::cout<<" The value is: "<<*it<<"\n\n";

    std::cout<<"-----------------------TASK 6----------------------------"<<"\n\n";

        //accumulate adderar alla elementer i vår vektorn och sedan retunerar den summan

        auto it_3=std::accumulate(book_vec.begin(),book_vec.end(),double() ,My_bin_op(book_vec.size()));//My_bin_op säger till accumulate vad den ska adderar
        std::cout<<" The value is: "<<it_3<<std::endl;


    std::cout<<"-----------------------TASK 7----------------------------"<<"\n\n";
        std::vector<double> v2;
        v2.resize(book_vec.size());
        std::transform(book_vec.begin(), book_vec.end(),v2.begin(), UnOP()); // returns the specified elemts of a data typ from a class or struct that
                                                                            // we would like to extract from the vector
    for(auto x:v2){
        std::cout<<x<<", ";
    }
    std::cout<<std::endl;
    std::cout<<"-----------------------TASK 8----------------------------"<<"\n\n";
        std::transform(v2.begin(),v2.end(),v2.begin(),ReplaceV(it_3));
        for(auto x:v2){
        std::cout<<x<<", ";
        }
    std::cout<<std::endl;
    std::cout<<"-----------------------TASK 9----------------------------"<<"\n\n";
    std::sort(v2.begin(),v2.end());
    for(auto x:v2){
        std::cout<<x<<", ";
    }


    return 0;
}

