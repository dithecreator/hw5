//
//  Laptop.hpp
//  hw5
//
//  Created by Дима on 11.09.23.
//

#ifndef Laptop_hpp
#define Laptop_hpp
#include <stdio.h>
#include "RAM.hpp"
#include "SSD.hpp"
#include "CPU.hpp"
#include "VideoCard.hpp"
class Laptop{
    char* model;
    int price;
        RAM ram;
        SSD ssd;
        CPU cpu;
        VideoCard videocard;
public:
    static int laptopsAmount;
    Laptop();
    void inputModel(int);
    Laptop(const char*, int, const char*, int, const char*, int, const char*, int);
    void print();
    ~Laptop();
    
};

#endif /* Laptop_hpp */
