#pragma once
#include "Person.h"

class Customer : public Person
{
private:
    string agentId;
    string address;
    vector<string> vPolicy;


public:
    //Mutators
    void setAddress(string addressVal) {
        address = addressVal;
    }

    void setVPolicy(vector<string> vpVal) {
        vPolicy = vpVal;
    }

    void setAgentId(string agentIdVal) {
        agentId = agentIdVal;
    }

    //Accessors
    string getAddress() { return address; }
    string getAgentId() { return agentId; }
    vector<string> getVPolicy() { return vPolicy; }

    //Constructor(s)
    Customer(string nameVal = "na", string emailVal = "na", string addressVal = "na",
        string agentIdVal = "na",
        vector<string> vpVal = {} )
        : Person(nameVal, emailVal) {
        setAgentId(agentIdVal);
        setAddress(addressVal);
        setVPolicy(vpVal);
    }

    //User-Defined Methods
    string toString() {
        stringstream sout;
        sout << this << " Customer[ Name: " << getName() << ", Email: " << getEmail()
            << ",\n\t\t Address: " << getAddress()
            << ", Agent ID: " << getAgentId()
            << ",\n\t\t Policy No: ";

        for (string p : getVPolicy()) {
            sout << p << ", ";
        }
        sout << "]";
        return sout.str();
    }

    void addNewPolicy(string policyNo) {
        vPolicy.push_back(policyNo);
    }


};

