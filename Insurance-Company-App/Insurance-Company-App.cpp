// Insurance-Company-App.cpp 
#pragma once
#include "mylibraries.h"
#include "Person.h"
#include "Customer.h"


int main()
{
    //Test Person object
    Person p1("Homer Simpson", "homer@aol.com");
    cout << "p1 " << p1.toString() << endl;

    //Test customer class
    Customer c1("Homer Simpson", "homer@aol.com", "123 Main Ave Springfield", 
                "AI007",
                vector<string>{"H777", "V888"});
    cout << "c1 " << c1.toString() << endl;
    c1.addNewPolicy("V999");
    cout << "c1 " << c1.toString() << endl;
}
