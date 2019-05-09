//
//  Employee.hpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#ifndef Employee_h
#define Employee_h


#include <string>
#include "Person.hpp"


class Employee : public Person
{
public:
    Employee(std::string name, std::string company);
    void print();
    
private:
    std::string mCompany;
};


#endif /* Employee_h */
