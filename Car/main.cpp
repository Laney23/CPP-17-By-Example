//
//  Main.cpp
//  Car
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <iostream>
#include "Car.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Car redVolvo(20, 30);
    cout << "Red Volvo speed: " << redVolvo.getSpeed() << " miles/hour, Direction: "
            << redVolvo.getDirection() << " degrees" << endl;
    
    redVolvo.accelerate(30);
    redVolvo.turnLeft(60);
    cout << "Red Volvo speed: " << redVolvo.getSpeed() << " miles/hour, Direction: "
            << redVolvo.getDirection() << " degrees" << endl;
    
    redVolvo.decelerate(60);
    redVolvo.turnRight(50);
    cout << "Red Volvo speed: " << redVolvo.getSpeed() << " miles/hour, Direction: "
            << redVolvo.getDirection() << " degrees" << endl;

    return 0;
}
