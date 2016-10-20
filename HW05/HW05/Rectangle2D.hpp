//
//  Rectangle2D.hpp
//  HW05
//
//  Created by Steven Mumford on 10/20/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

#include <stdio.h>

class Rectangle2D {
    
    double x;
    double y;
    double width;
    double height;
    
public:
    
    Rectangle2D();
    Rectangle2D(int x1, int y1, int width1, int height1);
    
    const int getX();
    const int getY();
    int setX(int newX);
    int setY(int newY);
    
    const int getWidth();
    const int getHeight();
    int setWidth(int newWidth);
    int setHeight(int newHeight);
    
};

#endif /* Rectangle2D_hpp */
