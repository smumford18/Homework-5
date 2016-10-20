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
    
    // Problem 11.5
    int sampleListSize;
    int *sizePtr = new int[sampleListSize];
    
    int sampleList[8] = {1, 2, 4, 5, 10, 100, 2, -22};
    
    cout << findSmallest(sampleList, sampleListSize) << endl;
    delete[] sizePtr;
    
    
    //Problem 11.9
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    
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

int analyzeInput(int x)
{
    //int list[6] = {1, 1, 2, 4, 5, 5};
    int *y = new int[x];
    
    for(int i=0; i < x; i++) {
        cout << "Enter a value: ";
        cin >> y[i];
    }
    
    int sum = 0;
    for(int i=0; i <= x; i++) {
        sum += y[i];
    }
    
    double avg = sum / x;
    
    int valuesAboveAvg = 0;
    for(int i = 0; i <= x; i++) {
        if(y[i] > avg)
            valuesAboveAvg++;
    }
    
    return avg;
    return valuesAboveAvg;
    
}

int *doubleCapacity(const int* list, int size)
{
    size *= 2;
    int newList[size];
    int *y = newList;
    
    return y;
}

int findSmallest(int* list, int size)
{
    for(int i=0; i <= size; i++) {
        for(int j=0; j < (size-1); j++) {
            if(list[i] > list[i+1]) {
                int temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
    }
    int smallest = *list;
    return smallest;
}

