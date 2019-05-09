//
//  Car.cpp
//  Car
//
//  Created by Aginor on 5/8/19.
//  Copyright © 2019 Aginor. All rights reserved.
//

#include <stdio.h>
#include "Car.hpp"

// public
Car::Car() : mSpeed(0), mDirection(0)
{
}


Car::Car(int speed, int direction) : mSpeed(speed), mDirection(direction)
{
}


Car::~Car()
{
}


int Car::getSpeed() const
{
    return mSpeed;
}


int Car::getDirection() const
{
    return mDirection;
}


void Car::accelerate(int speed)
{
    mSpeed += speed;
    
    if (mSpeed > MAX_SPEED)
    {
        mSpeed = MAX_SPEED;
    }
}


void Car::decelerate(int speed)
{
    mSpeed -= speed;
    
    if (mSpeed < 0)
    {
        mSpeed = -mSpeed;
        
        if (mSpeed > MAX_SPEED)
        {
            mSpeed = MAX_SPEED;
        }
        
        if (mDirection < MAX_TURN)
        {
            mDirection += MAX_TURN;
        }
        else
        {
            mDirection -= MAX_TURN;
        }
    }
}


void Car::turnLeft(int degrees)
{
    mDirection -= degrees;
    mDirection %= MAX_DEGREES;
    
    if (mDirection < 0)
    {
        mDirection += MAX_DEGREES;
    }
}


void Car::turnRight(int degrees)
{
    mDirection += degrees;
    mDirection %= MAX_DEGREES;
}



// private
