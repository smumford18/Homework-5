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

int analyzeInput(int *x);

int main() {
    
    int x = 5;
    int *ptr= NULL;
    ptr = &x;
    analyzeInput(ptr);
    return 0;
}

int analyzeInput(int *x)
{
    int *y;
    srand((unsigned int)time(NULL));
    for(int i=0; i < *x; i++) {
        y[i] = rand() % 20;
    }
    int sum = 0;
    for(int i=0; i < *x; i++) {
        sum += y[i];
    }
    cout << sum << endl;
    
    return sum;
}

