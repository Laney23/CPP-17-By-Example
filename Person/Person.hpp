//
//  Person.hpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <string>
#include <iostream>

class Person
{
public:
    Person(std::string name);
    virtual void print();
    
private:
    std::string mName;
};


#endif /* Person_h */
