 #include <iostream>
 #include <string>

 class Account {
     //  String representing the name of the account's owner
     std::string name;  
     //  The account number
     int id;            
     //  The current account balance
     double balance;
 public:
     //  Initializes a bank account object
     Account(const std::string& customer_name, int account_number, double amount): 
                     name(name), id(account_number), balance(amount) {
         std::cout << "Creating Account object #" << id << '\n';
         if (amount < 0) {
             std::cout << "Warning: negative account balance\n";
             balance = 0.0;
         }
     }

     //  Releases the memory allocated to this account object
     ~Account() {
         std::cout << "Destroying Account object #" << id << '\n';
     }

     //  Adds amount amt to the account's balance.
     void deposit(double amt) {
         balance += amt;
     }

     //  Deducts amount amt from the account's balance, 
     //  if possible.
     //  Returns true if successful; otherwise, it returns false.
     //  A call can fail if the withdraw would
     //  cause the balance to fall below zero
     bool withdraw(double amt) {
         bool result = false;  //  Unsuccessful by default
         if (balance - amt >= 0) {
             balance -= amt;
             result = true;  //  Success
         }
         return result;
     }

     //  Displays information about the account object
     void display() {
         std::cout << "Name: " << name << ", ID: " << id
              << ", Balance: " << balance << '\n';
     }
 };

 //  Allows a user interact with a bank account database.
 int main() {
     Account acct("Jerry", 193423, 1250.00);
     acct.display();
     //  The destructor automatically displays the number of the
     //  account being destroyed when main is finished
 }

