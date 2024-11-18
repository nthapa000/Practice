#include <bits/stdc++.h>
using namespace std;
#include <exception>

// this won't run since class of exception already present
// class exception{
//     protected:
//     string msg;

//     public:
//     exception(string msg){
//         this->msg = msg;
//     }
//     // what function is present or it either it inherited
//     string what(){
//         return msg;
//     }
// }

// // if we are able to do the same thing by if else then why use try catch
// int main(){

//     // since we are trying to allocate very very big array it will raise error and abort program on its own, if there are 10000 lines code then how will we know which line got the error and the code will interrupt directly , using if else is here complicated
//     try{
//     int *p = new int[10000000000];
//     cout<<"Memory allocation is successfull \n";
//     delete []p;
//     }
//     catch(const exception &e){
//     // exception is a class, ek error throw hoga , computer ek exception khud fekhega jiska type hoga exception
//         cout<<"Exception occured: "<<e.what()<<endl;
//         // std::bad_alloc
//         // we can also tell due to which line
//     }
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     try{
//         if(b==0)
//             throw "Dividing by zero not possible";
//         int c = a/b;
//         cout<<c<<endl;
//     }catch(const char *e){
//         cout<<"Exception occured: "<<e<<endl;
//     }
//     // Dividing by zero depend on from compiler to compiler

// }

// this won't run since class of exception already present
// class exception{
//     protected:
//     string msg;

//     public:
//     exception(string msg){
//         this->msg = msg;
//     }
//     // what function is present or it either it inherited
//     string what(){
//         return msg;
//     }
// };

// class runtime_error:public exception{
//     public:
//     runtime_error(const string &msg):exception(msg);
// };

class InvalidAmountError: public runtime_error{
    public:
    InvalidAmountError(const string &msg):runtime_error(msg){

    };
};

class InsufficientBalanceError: public runtime_error{
    public:
    InsufficientBalanceError(const string &msg): runtime_error(msg){

    };
};

class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // deposit
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << "Rs is credited succesfully \n";
        }
        else
        {
            // this is the name of exception now someone should handle these exception , for that we use try
            throw InvalidAmountError("amount should be greater than 0 \n");
        }
    }

    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << "Rs is debited successfully";
        }
        else if (amount < 0)
        {
            // runtime_error is also class and this message is passed
            // whenever it throws error its object is created
            throw InvalidAmountError("amount should be greater than 0 \n");
        }
        else
        {
            throw InsufficientBalanceError("Your balance is low \n");
        }
    }
};

int main()
{
    Customer C1("Nishant", 5000, 10);
    try
    {
        C1.deposit(100);
        C1.withdraw(6000);
        C1.deposit(100);
    }
    // more meaningfull
    catch (const InvalidAmountError &e)
    {
        // object created of runtime_error then it acces what() function and hence prints error
        cout << "Exception Occured: " << e.what() << endl;
    }
    catch(const InsufficientBalanceError &e)
    {
        cout << "Exception Occured: " << e.what() << endl;
    }
    catch(const char *e){
        // default catch
        cout<<"Exception occured "<<endl;
    }
}
// const used to prevent tampering of the message
