//
//  main.cpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <iostream>
#include <string>
#include "Person.hpp"
#include "Student.hpp"
#include "Employee.hpp"

using namespace std;



int main(int argc, const char * argv[]) {
    Person monica("Monica");
    Student demi("Demi", "MIT");
    Employee charles("Charles", "Microsoft");
    
    monica.print();
    demi.print();
    charles.print();
    
    Person* personPtr;
    personPtr = &demi;
    personPtr->print();
    
    return 0;
}
