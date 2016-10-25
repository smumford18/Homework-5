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
    
    // Constructors
    Rectangle2D();
    Rectangle2D(int x1, int y1, int width1, int height1);
    
    // Getters and setters for x and y values
    const int getX();
    const int getY();
    int setX(int newX);
    int setY(int newY);
    
    // Getters and setters for the width and height
    const int getWidth();
    const int getHeight();
    int setWidth(int newWidth);
    int setHeight(int newHeight);
    
    // Functions to calculate area and perimeter
    const int getArea();
    const int getPerimeter();
    
    // Functions to check relationships between two rectangles
    const bool contains(double x, double y);
    const bool contains(const Rectangle2D &r);
    const bool overlaps(const Rectangle2D &r);
    
};

#endif /* Rectangle2D_hpp */
