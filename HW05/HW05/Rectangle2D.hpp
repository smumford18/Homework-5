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
    Rectangle2D(double x1, double y1, double width1, double height1);
    
    // Getters and setters for x and y values
    const double getX();
    const double getY();
    double setX(double newX);
    double setY(double newY);
    
    // Getters and setters for the width and height
    const double getWidth();
    const double getHeight();
    double setWidth(double newWidth);
    double setHeight(double newHeight);
    
    // Functions to calculate area and perimeter
    const double getArea();
    const double getPerimeter();
    
    // Functions to check relationships between two rectangles
    const bool contains(double x, double y);
    const bool contains(const Rectangle2D &r);
    const bool overlaps(const Rectangle2D &r);
    
};

#endif /* Rectangle2D_hpp */
