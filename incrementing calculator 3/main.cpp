//
//  main.cpp
//  incrementing calculator 3
//
//  Created by Aaron Covrig on 3/7/15.
//  Copyright (c) 2015 Aaron Covrig. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

double i = 0.00001; // the amount to increment by
double e = 0.0001; // the margin of error
double y = 10; // the desired value
double x = 0; // starting value of x
double f = 2 * x * x * x * x; // seems like this has to be entered twice, once here and a second time inside the while statement...
void iterate() {
    while (abs(y - f) >= e) {
        cout << "x = " << x << " y = " << f << endl;
        x = x + i;
        f = 2 * x * x * x * x; // here is the second spot for the function
        }
    if (abs(y - f) <= e) {
        cout << "Success! An independant variable value of: " << x << " has a corresponding dependent variable value of: " << y << " Which is a solution" << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    iterate();
    return 0;
}
