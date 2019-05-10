//
//  Stack.hpp
//  Stack
//
//  Created by Aginor on 5/9/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#ifndef Stack_h
#define Stack_h


#include <cassert>
#include "Cell.hpp"


class Stack {
public:
    Stack();
    void push(int value);
    int top();
    void pop();
    int size() const;
    bool empty() const;
    
protected:
    
private:
    Cell* mFirstCellPtr;
    int mSize;
};



#endif /* Stack_h */
