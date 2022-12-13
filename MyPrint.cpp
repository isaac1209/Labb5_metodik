#include "MyPrint.h"

MyPrint::MyPrint(std::vector<Book>& booK_ve) {
    auto print_vec=[](Book booK_ve2){
        std::cout<<booK_ve2;
    };
    std::for_each(booK_ve.begin(),booK_ve.end(),print_vec);

}
