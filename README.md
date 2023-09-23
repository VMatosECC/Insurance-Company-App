# Insurance-Company-App
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
