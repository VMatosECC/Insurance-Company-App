// Insurance-Company-App.cpp 
#pragma once
#include "mylibraries.h"
#include "Person.h"
#include "Customer.h"
#include "Agent.h"


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

    Customer c2("Ned Flanders", "ned@gmail.com", "125 Main Ave Springfield", 
                       "AI008",
                       vector<string>{"H444", "V555"});
    cout << "c2 " << c2.toString() << endl;

    //Test Agent class
    Agent a1("Agent Flo", "flo@progressive.com", "1234567");
    a1.addCustomer(c1);
    a1.addCustomer(c2);
    cout << "\na1 " << a1.toString() << endl;
}
