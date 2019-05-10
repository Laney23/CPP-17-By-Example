//
//  Cell.hpp
//  Stack
//
//  Created by Aginor on 5/9/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#ifndef Cell_h
#define Cell_h



class Cell
{
public:
    Cell(int value, Cell* next);
    int getValue() const;
    Cell* getNext() const;
    
protected:
    
private:
    int mValue;
    Cell* mNext;
};



#endif /* Cell_h */
