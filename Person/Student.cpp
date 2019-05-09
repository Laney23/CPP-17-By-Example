//
//  Student.cpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <stdio.h>
#include "Student.hpp"

using namespace std;


Student::Student(string name, string university) : Person(name), mUniversity(university)
{
}


void Student::print()
{
    Person::print();
    cout << "University: " << mUniversity << endl;
}
