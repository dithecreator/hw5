//
//  VideoCard.hpp
//  hw5
//
//  Created by Дима on 11.09.23.
//

#ifndef VideoCard_hpp
#define VideoCard_hpp
#include <stdio.h>

class VideoCard{
private:
    char* model;
    int price;
    
    public:
    VideoCard();
    char* getModel();
    void print();
    void setVideoCard(const char*, int);
    int getPrice();
        ~VideoCard();
        

};

#endif /* VideoCard_hpp */
