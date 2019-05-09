//
//  Student.hpp
//  Person
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#ifndef Student_h
#define Student_h

#include <string>
#include <iostream>
#include "Person.hpp"

class Student : public Person
{
public:
    Student(std::string name, std::string university);
    void print();
    
private:
    std::string mUniversity;
};


#endif /* Student_h */
