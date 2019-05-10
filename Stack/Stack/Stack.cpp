//
//  Stack.cpp
//  Stack
//
//  Created by Josh Laney on 5/9/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include "Stack.hpp"


using namespace std;


Stack::Stack() : mFirstCellPtr(nullptr), mSize(0)
{
}



void Stack::push(int value)
{
    mFirstCellPtr = new Cell(value, mFirstCellPtr);
    mSize++;
}



int Stack::top()
{
    assert(!empty());
    return mFirstCellPtr->getValue();
}



void Stack::pop()
{
    assert(!empty());
    Cell* deleteCellPtr = mFirstCellPtr;
    mFirstCellPtr = mFirstCellPtr->getNext();
    delete deleteCellPtr;
    mSize--;
}



int Stack::size() const
{
    return mSize;
}



bool Stack::empty() const
{
    return (mFirstCellPtr == nullptr);
}
