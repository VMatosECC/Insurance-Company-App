#pragma once
#include "Person.h"
#include "Customer.h"

class Agent : public Person
{
    private:
    string agentID;
    vector<Customer> customers;

    public:
        Agent(string name, string email, string agentID);
        string  getAgentID();
        vector<Customer> getCustomers();
        void    setCustomers(vector<Customer> customers);
        void    setAgentID(string agentID);
        void    addCustomer(Customer c);    
        string  toString();

};

Agent::Agent(string name, string email, string agentID) 
            : Person(name, email)
{
    setAgentID(agentID);
}

string Agent::getAgentID()
{
    return agentID;
}

vector<Customer> Agent::getCustomers()
{
    return customers;
}

void Agent::setCustomers(vector<Customer> customers)
{
    this->customers = customers;
}
void Agent::setAgentID(string agentID)
{
    this->agentID = agentID;
}

void Agent::addCustomer(Customer c)
{
    customers.push_back(c);
}

string Agent::toString()
{
    stringstream sout;
    sout << this << " Agent[ " << Person::toString() 
        << " AgentID: " << agentID 
        << "\n\tCustomers:" << endl;
    for (Customer c : customers)
    {
        sout << "\t" << c.toString() << endl;
    }
    return sout.str();
}