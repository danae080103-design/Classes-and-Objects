/*
Name: Danae Larrain
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date : 03/02/2026
*/

#include <iostream>
#include <string>
class Car {
    
    private:
    
    std::string brand {" Volkswagen "} ;
    std::string model = "; Polo";
    int year {2012};
    
    public:
    Car() {
        
    }
    
     Car( std::string b, std::string m, int y)
     {
        brand = b ; model = m ; year = y;
         
     }
    Car (const Car & other)
    {
        brand = other.brand; model = other.model; year = other.year;
    }
    
    void startEngine(){
        std::cout << "The " << brand << " " << model << " engine is starting..." << std::endl;
    }
    void accelerate() {
        std::cout << "The " << year << " " << model << " is accelerating!" << std::endl;
    }
        
};

