#include<bits/stdc++.h>
using namespace std;

// class Customer {
    
//     string name;
//     int account_number;
//     int balance;
//     int *roi;
    
//     public: 
//     Customer(){
//         cout<<"Constructor is called"<<endl;;
//     }
//     // Parameterized Constructor 
//     Customer(string a, int b){
//         name = a;
//         account_number = b;
//         balance = 100;
//         roi = new int[100];
//         // will ask memory in heap
//         // if there is no 100 size array available then it will throw error
//     }

//     Customer(string name, int account_number, int balance){
//         //  (*this).name 
//         // this is a pointer to the object, store address of object created
//         this->name = name;
//         this->account_number= account_number;
//         this->balance = balance;
//     }

//     // Constructor cannot be redeclared hence we have to comment one of the constructor if both have three parameters

//     // inline Constructor
//     // inline Customer(string a,int b, int c): name(a),account_number(b),balance(c){}

// // we made our own copy constructor
//     Customer(Customer &B){
//         // A1 wont be able to give its value to B since we don't have 
//         // default  copy constructor 
//         // This will result in several copy constructor call 
//         // to do copy it will call the copy constructor
//         // so basically we will pass reference of A1 = &B
//         name = B.name;
//         account_number = B.account_number;
//         balance = B.balance;
//     }

//     void display(){
//         cout<<name<<" "<<account_number<<" "<<balance<<endl;
//     }
// };

// int main(){
//     Customer A1("Nishant",12342,200000); 
//     Customer A2(A1);
//     A2.display();
//     // cout<<A1<<endl;
//     Customer A5;
//     A5=A1;
//     A1.display();
// }


// class Customer{
//     string name;
//     int *balance;
//     public:
//     Customer(string name, int bal){
//         this->name = name;
//         // int type memory allocated
//         balance = new int;
//         // value given
//         *balance = bal;
//     }
//     // Only one destructor , no return type , no parameter
//     ~Customer(){
//         cout<<"name";
//         // It delete all the dynamic memory allocation and not the object 
//         // close all the open files , or release resources like printer
//     }
//     // Object will be destroyed when program finish and pop out from the stack 
// };

// int main(){
//     Customer A1("Nishant",10000);

// }


class Customer{
    string name;
    int *data;

    public:
    Customer(string name){
        this->name = name;
        cout<<"constructor is "<<name<<endl;
    }

    ~Customer(){
        cout<<"Destructor is "<<name<<endl;
        // Destructor was in reverse order , it is possible that A3 can use A2;
    }
};

int main(){
    Customer A1("1"),A2("2"),A3("3");
    Customer A4("4");
    Customer *A5 = new Customer("5");
    // Constructor is called but the destructor is not called
    delete A5;
}