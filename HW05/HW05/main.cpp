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
#include "Course.hpp"

using namespace std;

int analyzeInput(int x);
int *doubleCapacity(const int* list, int size);
int findSmallest(int* list, int size);

int main() {
    
// Problem 11.1
    // Allows user to enter a value for how many values they want to take the average of
    cout << "How many values will you enter? ";
    int x;
    cin >> x;
    
    // Creates the array of the user input size
    int *y = new int[x];
    
    // Reads in values into the array
    for(int i=0; i < x; i++) {
        cout << "Enter a value: ";
        cin >> y[i];
    }
    
    // Calculates the sum of the values in the array
    double sum = 0;
    for(int i=0; i <= x; i++) {
        sum += y[i];
    }
    
    // Calculates the average of the array
    double avg = (sum / x);
    
    // Finds how many values in the array are greater than the average
    int valuesAboveAvg = 0;
    for(int i = 0; i <= x; i++) {
        if(y[i] > avg)
            valuesAboveAvg++;
    }
    
    // Displays the average and how many values in the array are above the average
    cout << "The average is " << avg << ".\nThe number of values above the average is " << valuesAboveAvg << ".\n\n";
    delete[] y;
    
    
//Problem 11.3
    // Creates an array
    int arraySize = 4;
    int *list = new int[arraySize];
    list = doubleCapacity(list, arraySize);
    
    // Adds values to the array
    for(int i =0; i<arraySize; i++)
        list[i] = i+1;
    
    // Displays the values in the new array
    for (int i=0; i < 2*arraySize; i++)
        cout << list[i];
    cout << "\n\n";
    
    delete[] list;

// Problem 11.5
    // A test array used to test the findSmallest function
    int sampleList[8] = {1, 2, 4, 5, 10, 100, 2, -22};
    
    // Uses the findSmallest function to return the smallest value in the array
    cout << "The smallest value in the array is: " << findSmallest(sampleList, 8) << "\n\n";
    
    //Problem 11.9
    // Creates three rectrangle objects
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    
    // Displays the area and perimeter of the first rectangle
    cout << "The area of the first rectangle is " << r1.getArea() << " and the perimeter is " << r1.getPerimeter() << "." << endl;
    
    // Uses the contains point function to see if the point is contained by the rectangle
    if(r1.contains(3, 3) == true)
        cout << "The point (3, 3) is inside the first rectangle.\n";
    else
        cout << "The point (3, 3) is not inside the first rectangle.\n";
    
    // Uses the contains function to see if the first rectangle contains the second rectangle
    if(r1.contains(r2) == true)
        cout << "The 1st rectangle contains the 2nd rectangle.\n";
    else
        cout << "The 1st rectangle doesn't contains the 2nd rectangle.\n";
    
    // Uses the overlaps function to see if the third rectangle overlaps with the first rectangle
    if(r1.overlaps(r3) == true)
        cout << "The 3rd rectangle overlaps with the first rectangle.\n";
    else
        cout << "The 3rd rectangle doesn't overlap with the first rectangle.\n";
    cout << endl;
    
// Problem 11.13
    // Creates a calculus course with a capacity
    Course course1("Calculus", 40);
    
    // Adds students to the course
    course1.addStudent("Nathan");
    course1.addStudent("Lydia");
    course1.addStudent("Bob");
    
    // Deletes a student from the class
    course1.dropStudent("Bob");
    
    // Displays the students in the class after one is dropped
    for(int i=0; i < course1.getNumberOfStudents(); i++)
        cout << *(course1.getStudents()+i) << endl;
    
    return 0;
}

// Function that doubles the size of an array
int *doubleCapacity(const int* list, int size)
{
    if( size > 0 && list != NULL)
    {
        int *newList = new int[2*size];
        
        for(int i=0; i < size; i++)
            newList[i] = list[i];
        
        for(int i = 0; i < 2*size; i++)
            newList[i]= NULL;
        
        return newList;
    }
    else
        return NULL;
}

// Function to find the smallest value in an array
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
