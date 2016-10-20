//
//  Rectangle2D.cpp
//  HW05
//
//  Created by Steven Mumford on 10/20/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Rectangle2D.hpp"

Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(int x1, int y1, int width1, int height1)
{
    x = x1;
    y = y1;
    width = width1;
    height = height1;
}

const int Rectangle2D::getX()
{
    return x;
}
const int Rectangle2D::getY()
{
    return y;
}

int Rectangle2D::setX(int newX)
{
    x = newX;
    return x;
}

int Rectangle2D::setY(int newY)
{
    y = newY;
    return y;
}

const int Rectangle2D::getWidth()
{
    return width;
}

const int Rectangle2D::getHeight()
{
    return height;
}

int Rectangle2D::setWidth(int newWidth)
{
    width = newWidth;
    return width;
}

int Rectangle2D::setHeight(int newHeight)
{
    height = newHeight;
    return height;
}
