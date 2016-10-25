//
//  Course.cpp
//  HW05
//
//  Created by Steven Mumford on 10/21/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Course.hpp"

using namespace std;

Course::Course(const string& courseName, int capacity)
{
    
    numberOfStudents = 0;
    this->courseName = courseName;
    this->capacity = capacity;
    students = new string[capacity];
    
}

Course::~Course()
{
    delete[] students;
}

string Course::getCourseName() const
{
    return courseName;
}

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

void Course::dropStudent(const string& name)
{
    //int offset =sizeof(string);
    //string *ptr = students;
    //for(ptr =students; ptr < students+offset; ptr++)
    for(int i=0; i < capacity; i++)
        if(*(getStudents()+i) == name)
            students[i] = "";
    numberOfStudents--;
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

void Course::clear()
{
    
}

