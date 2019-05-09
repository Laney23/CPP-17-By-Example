//
//  Employee.cpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <stdio.h>
#include "Employee.hpp"

using namespace std;

Employee::Employee(string name, string company) : Person(name), mCompany(company)
{
}


void Employee::print()
{
    Person::print();
    cout << "Company: " << mCompany << endl;
}
