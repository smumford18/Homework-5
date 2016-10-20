//
//  main.cpp
//  HW05
//
//  Created by Steven Mumford on 10/19/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <ctime>

using namespace std;

int analyzeInput(int x);
int *doubleCapacity(const int* list, int size);
int findSmallest(int* list, int size);

int main() {
    
    int x = 5;
    cout << analyzeInput(x) << endl;
    
    int initialSize = 5;
    int intitialList[initialSize];
    //const int *a = intitialList;
    int *a = doubleCapacity(intitialList, initialSize);
    cout << *a << endl;
    
   
    int sampleListSize = 8;
    int sampleList[8] = {1, 2, 4, 5, 10, 100, 2, -22};
    
    cout << findSmallest(sampleList, sampleListSize) << endl;
    
    return 0;
}

int analyzeInput(int x)
{
    int list[6] = {1, 1, 2, 4, 5, 5};
    int *y = list;
    
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

