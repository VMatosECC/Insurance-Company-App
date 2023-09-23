// Insurance-Company-App.cpp 
#pragma once
#include "mylibraries.h"
#include "Person.h"
#include "Customer.h"
#include "Agent.h"


int main()
{
    /*
    The app implements a simple insurance company app.
    It has 3 classes: Person, Customer, and Agent.
    Person is the base class for Customer and Agent.
    Customer has a vector of policy numbers (home, cars, etc).
    Agent has a vector of customers.
    There is a 1:many relationship between Agent and Customer.
    and 1:many relationship between Customer and Policy.

    The app creates a Person, Customer, and Agent object.
    It then prints the objects using their toString() method.

    TODO: Add a Policy class describing what they cover, cost,
    expiration. Put them into a vector. Instantiate its objects 
    matching the IDs     in the Customer class. Include a 
    findPolicy(string policyID) method in the Policy class. 
    Add an addPolicy and deletePolicy methods in the Customer class.
    Update accordingly the toString(), accessors, and mutstors method 
    in the Customer and Policy class.

    */
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
