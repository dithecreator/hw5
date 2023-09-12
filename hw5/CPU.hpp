//
//  CPU.hpp
//  hw5
//
//  Created by Дима on 11.09.23.
//

#ifndef CPU_hpp
#define CPU_hpp

#include <stdio.h>
class CPU{
private:
    char* model;
    int price;
    
public:
    CPU();
    char* getModel();
    void print();
    void setCPU(const char*, int);
    int getPrice();
    ~CPU();

};
#endif /* CPU_hpp */
