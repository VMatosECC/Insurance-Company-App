# Insurance-Company-App
    The app implements a simple insurance company. It has three classes: Person, Customer, and Agent.
    - Person is the base class for Customer and Agent.
    - Customer has a vector of policy numbers (home, cars, etc.)
    - Agent has a vector of customers.
    - There is a 1:many relationship between Agent and Customer.
      and 1:many relationship between Customer and Policy.

    The app creates a Person, Customer, and Agent object.
    It then prints the objects using their toString() method.

    TODO: 
    1. Add a Policy class describing what they cover, cost,
       and expiration date. Put them into a vector. 
    2. Instantiate its objects matching the IDs in the Customer class. 
       Put them into a vector.
    3. Include a findPolicy(string policyID) method in the Policy class. 
    4. Add an addPolicy and deletePolicy methods in the Customer class.
    5. Update the toString(), accessors, and mutators method
       in the Customer and Policy class accordingly.
