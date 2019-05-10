//
//  main.cpp
//  Stack
//
//  Created by Josh Laney on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <iostream>
#include <string>
#include "Cell.hpp"
#include "Stack.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout << "top: " << s.top() << ", size: " << s.size() << ", empty: "
                << ( s.empty() ? "true" : "false" ) << endl;
    
    s.pop();
    s.pop();
    s.push(4);
    
    cout << "top: " << s.top() << ", size: " << s.size() << ", empty: "
                << ( s.empty() ? "true" : "false" ) << endl;
    
    return 0;
}
