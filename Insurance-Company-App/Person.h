#pragma once
#include "mylibraries.h"

class Person
{
private:
    //data members
    string name;
    string email;

public:
    //mutators
    void setName(string nameVal) {
        name = nameVal;
    }
    void setEmail(string emailVal) {
        email = emailVal;
    }
    //accessors
    string getName() { return name; }
    string getEmail() { return email; }

    //constructors
    Person(string nameVal = "na", string emailVal = "na") {
        setName(nameVal);
        setEmail(emailVal);
    }
    //user-defined
    string toString() {
        stringstream sout;
        sout << this << " Person[Name: " << getName()
            << ", Email: " << getEmail() << "]";
        return sout.str();
    }

};

