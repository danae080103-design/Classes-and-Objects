/*
Name: Danae Larrain
Course: CSCI 272
Lesson Number: Lesson 4 
Code Topic: Copy Constructor Example
Date : 03/02/2026
*/

#include <iostream>
#include <string>

class User {
private:
    std::string username;
    std::string password;

public:
    User(const std::string& uname, const std::string& pwd) {
        username = uname;
        password = pwd;
    }

    bool login(const std::string& inputUser, const std::string& inputPwd) const {
        return (inputUser == username) && (inputPwd == password);
    }

    void updatePassword(const std::string& newPwd) {
        password = newPwd;
    }
};
