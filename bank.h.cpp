/*
Name: Danae Larrain
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date : 03/02/2026
*/
#include <iostream>

class BankAccount {
private:
    double balance = 0.0;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};
