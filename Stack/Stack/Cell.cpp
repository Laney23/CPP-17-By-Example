//
//  Cell.cpp
//  Stack
//
//  Created by Aginor on 5/9/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include "Cell.hpp"



Cell::Cell(int value, Cell* next) : mValue(value), mNext(next)
{
}



int Cell::getValue() const
{
    return mValue;
}



Cell* Cell::getNext() const
{
    return mNext;
}
