/*
Name: Danae Larrain
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date : 03/02/2026
*/

#include "car.h"

int main(){
    
    Car car1;
    Car car2 ("Tesla", "X", 2022);
    Car car3(car2);
   
    car1.startEngine();
    car1.accelerate();
    car2.startEngine();
    Car car [20];
  
};
