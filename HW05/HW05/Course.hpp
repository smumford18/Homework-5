//
//  Course.hpp
//  HW05
//
//  Created by Steven Mumford on 10/21/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Course
{
    
    string courseName;
    string *students;
    int numberOfStudents;
    int capacity;
    
public:
    // Constructor and deconstructor
    Course(const string& courseName, int capacity);
    ~Course();
    
    // Getter functions
    string getCourseName() const;
    string* getStudents() const;
    int getNumberOfStudents() const;
    
    // Functions that manipulate the students in the course
    void addStudent(const string& name);
    void dropStudent(const string& name);
    void clear();
};

#endif /* Course_hpp */
