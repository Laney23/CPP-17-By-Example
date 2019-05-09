//
//  Person.cpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <stdio.h>
#include "Person.hpp"

using namespace std;

Person::Person(string name) : mName(name)
{
}


void Person::print()
{
    cout << "Person " << mName << endl;
}

