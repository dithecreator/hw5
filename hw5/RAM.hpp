//
//  RAM.hpp
//  hw5
//
//  Created by Дима on 11.09.23.
//

#ifndef RAM_hpp
#define RAM_hpp
#include <stdio.h>

class RAM{
private:
    char* model;
    int price;

public:
    RAM();
    char* getModel();
    void setRAM(const char*, int);
    int getPrice();
    void print();
    ~RAM();
    
};

#endif /* RAM_hpp */
