//
//  main.cpp
//  HW05
//
//  Created by Steven Mumford on 10/19/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <ctime>
#include "Rectangle2D.hpp"

using namespace std;

int analyzeInput(int x);
int *doubleCapacity(const int* list, int size);
int findSmallest(int* list, int size);

int main() {
    
    // Problem 11.1
    cout << "How many values will you enter? ";
    int x;
    cin >> x;
    int *y = new int[x];
    
    for(int i=0; i < x; i++) {
        cout << "Enter a value: ";
        cin >> y[i];
    }
    
    double sum = 0;
    for(int i=0; i <= x; i++) {
        sum += y[i];
    }
    
    double avg = (sum / x);
    
    int valuesAboveAvg = 0;
    for(int i = 0; i <= x; i++) {
        if(y[i] > avg)
            valuesAboveAvg++;
    }

    cout << "The average is " << avg << ".\nThe number of values above the average is " << valuesAboveAvg << ".\n";
    delete[] y;
    
    //Problem 11.3
    int *list = new int[3];
    list = doubleCapacity(list, 3);
    delete[] list;
    
    
    // Problem 11.5
    int sampleListSize;
    int *sizePtr = new int[sampleListSize];
    
    int sampleList[8] = {1, 2, 4, 5, 10, 100, 2, -22};
    
    cout << "The smallest value in the array is: " << findSmallest(sampleList, 8) << endl;
    delete[] sizePtr;
    
    
    //Problem 11.9
    Rectangle2D r1(0, 0, 5, 5);
    Rectangle2D r2(0, 0, 6, 3);
    Rectangle2D r3(0, 0, 3, 3);
    
    cout << "The area of the first rectangle is " << r1.getArea() << " and the perimeter is " << r1.getPerimeter() << "." << endl;
    
    if(r1.contains(3, 3) == true)
        cout << "The point (3, 3) is in the first rectangle.\n";
    else
        cout << "The point (3, 3) is not in the first rectangle.\n";
    
    if(r1.contains(r2) == true)
        cout << "The 1st rectangle contains the 2nd rectangle.\n";
    else
        cout << "The 1st rectangle doesn't contains the 2nd rectangle.\n";
    
    if(r1.overlaps(r3) == true)
        cout << "The 3rd rectangle overlaps with the first rectangle.\n";
    else
        cout << "The 3rd rectangle doesn't overlap with the first rectangle.\n";

    return 0;
}

int *doubleCapacity(const int* list, int size)
{
    size *= 2;
    int *newList = new int[2*size];
    //int *y = newList;
    for(int i=0; i < size; i++)
        newList[i] = list[i];
    
    return newList;
}

int findSmallest(int* list, int size)
{
    int smallest = 1000000;
    for(int i=0; i <= size; i++) {
        if(smallest > *(list + i)) {
            smallest = *(list +i);
        }
    }
    return smallest;
}
