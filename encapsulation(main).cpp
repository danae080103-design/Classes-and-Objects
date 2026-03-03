/*
Name: Danae Larrain
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date : 03/02/2026
*/

#include <iostream>
#include "user.h"
#include "bank.h"

int main() {
    User myUser("user1", "pass123");

    if (myUser.login("user1", "pass123")) {
        std::cout << "Access Granted" << std::endl;

        BankAccount myAccount;
        myAccount.deposit(200.0);
        myAccount.withdraw(50.0);
        
        std::cout << "Balance updated successfully." << std::endl;
    }

    return 0;
}
