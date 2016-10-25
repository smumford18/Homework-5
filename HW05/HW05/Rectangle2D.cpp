//
//  Rectangle2D.cpp
//  HW05
//
//  Created by Steven Mumford on 10/20/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Rectangle2D.hpp"

// No argument constructor
Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

// Constructor function
Rectangle2D::Rectangle2D(int x1, int y1, int width1, int height1)
{
    x = x1;
    y = y1;
    width = width1;
    height = height1;
}

// Getter function for x
const int Rectangle2D::getX()
{
    return x;
}

// Getter function for y
const int Rectangle2D::getY()
{
    return y;
}

// Setter function for x
int Rectangle2D::setX(int newX)
{
    x = newX;
    return x;
}

// Setter function for y
int Rectangle2D::setY(int newY)
{
    y = newY;
    return y;
}

// Getter function for the width of the rectangle
const int Rectangle2D::getWidth()
{
    return width;
}

// Getter function for the heigh of the rectangle
const int Rectangle2D::getHeight()
{
    return height;
}

// Setter function for the width of the rectangle
int Rectangle2D::setWidth(int newWidth)
{
    width = newWidth;
    return width;
}

// Setter function for the height of the rectangle
int Rectangle2D::setHeight(int newHeight)
{
    height = newHeight;
    return height;
}

// Calculates and returns the area of the rectangle
const int Rectangle2D::getArea()
{
    int area = width * height;
    return area;
}

// Calculates and returns the perimeter of the rectangle
const int Rectangle2D::getPerimeter()
{
    int perimeter = (2*width) + (2*height);
    return perimeter;
}

// Checks to see if a point is inside a rectangle
const bool Rectangle2D::contains(double x, double y)
{
    if(this->x < (getX()+(width/2)) && this->x > (getX()-(width/2)) && this->y < (getY()+(height/2)) && this->y > (getY() -(height/2)))
        return true;
    else
        return false;
}

// Checks to see if a rectangle is contained by another rectangle
const bool Rectangle2D::contains(const Rectangle2D &r)
{
    if((r.x + (r.width/2)) < (x + (width/2)) &&
       (r.x - (r.width/2)) > (x - (width/2)) &&
       (r.y + (r.height/2)) < (y + (height/2)) &&
       (r.y - (r.height/2)) > (y - (height/2)))
        return true;
    else
        return false;
}

// Checks to see if a rectangle overlaps with another rectangle
const bool Rectangle2D::overlaps(const Rectangle2D &r)
{
    if((r.x + (r.width/2)) < (x + (width/2)) ||
       (r.x - (r.width/2)) > (x - (width/2)) ||
       (r.y + (r.height/2)) < (y + (height/2)) ||
       (r.y - (r.height/2)) > (y - (height/2))) {
        if((r.x + (r.width/2)) < (x + (width/2)) &&
           (r.x - (r.width/2)) > (x - (width/2)) &&
           (r.y + (r.height/2)) < (y + (height/2)) &&
           (r.y - (r.height/2)) > (y - (height/2))) {
            return false;
        }
        else
            return true;
    }
    else
        return false;
}

