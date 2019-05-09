//
//  Car.hpp
//  Car
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#ifndef Car_h
#define Car_h

#define MAX_DEGREES   360
#define MAX_SPEED     200
#define MAX_TURN      180

class Car {
public:
    Car();
    Car(int speed, int direction);
    ~Car();
    
    int getSpeed() const;
    int getDirection() const;
    void accelerate(int speed);
    void decelerate(int speed);
    void turnLeft(int degrees);
    void turnRight(int degrees);
    
protected:
    
private:
    int mSpeed;
    int mDirection;
    
};

#endif /* Car_h */
