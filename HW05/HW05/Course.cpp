//
//  Course.cpp
//  HW05
//
//  Created by Steven Mumford on 10/21/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Course.hpp"

using namespace std;

// Constructor function
Course::Course(const string& courseName, int capacity)
{
    
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
    
}

// Deconstructor
Course::~Course()
{
    delete[] students;
}

// Getter for the name of the course
string Course::getCourseName() const
{
    return courseName;
}

// Function that adds a student to course
void Course::addStudent(const string& name)
{
    if(numberOfStudents != capacity)
        students[numberOfStudents] = name;
        numberOfStudents++;
    
    if(numberOfStudents == capacity)
    {
        capacity *= 2;
        string *newList = new string[2*capacity];
        for(int i=0; i < capacity; i++)
            newList[i] = students[i];
        
        for(int i = 0; i < 2*capacity; i++)
            newList[i] = "";
    }
}

// Function that drops a student from a course
void Course::dropStudent(const string& name)
{
    for(int i=0; i < capacity; i++)
        if(*(getStudents()+i) == name) {
            *(students+i) = "";
            for(int j=0; j < numberOfStudents+1; j++)
                *(students+i) = *(students+i+1);
            numberOfStudents--;
        }
}

// Getter function for the students in a course
string* Course::getStudents() const
{
    return students;
}

// Getter function for the number of students in a course
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

// Function that removes all the students from a course
void Course::clear()
{
    for(int i=0; i < capacity; i++)
        *(students+i)="";
    numberOfStudents = 0;
}

