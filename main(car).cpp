/*
Name: Danae Larrain
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date : 03/02/2026
*/

#include "car.h"

int main()
{
    Car car1;
    Car car2 ("Tesla", "X", 2022);
    Car car3(car2);
    Car*pcar1 = new Car;
    Car*pcar2 = new Car ("Tesla", "X", 2022);
    Car car[20];
    car1.startEngine();
    car2.startEngine();
    car1.accelerate();
    car2.accelerate();
    pcar1->startEngine();
    pcar2->startEngine();
    car[0].startEngine();
};







