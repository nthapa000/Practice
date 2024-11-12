#include<bits/stdc++.h>
using namespace std;

// class Customer{
//     string name;
//     int acc_number;
//     int balance;

//     public:
//     // to initialize the value
//     Customer(string a, int b, int c){
//         name= a;
//         acc_number= b;
//         balance= c;
//     }
// };

// int main(){
//     Customer A1("Rohit", 1,1000);
//     Customer A2("Nishant",2,10000);
//     // How will we know how many customer we have , where will we store this information
//     // we can't write here but we have to write it at the top 
//     int total_customer = 0;
//     // How will we increment the total_customer, we want to make our code readable and update the total_customer inside the class only 
// }

// class Customer{
//     string name;
//     int acc_number;
//     int balance;
//     static int total_customer;

//     public:
//     // to initialize the value
//     Customer(string a, int b, int c){
//         name= a;
//         acc_number= b;
//         balance= c;
//     }
// };
// A non static member cannot be declared outside
// int Customer::total_customer=0;

// class Customer{
//     string name;
//     int account_number;
//     int balance;
//     // same for all the objects of the Customer class
//     static int total_customer;
//     static int total_balance;
//     // Customer::total_customer = 10;
//     // We can access with this in int main since static data member is private , we need a static member function

//     public:
//     Customer(string name, int account_number, int balance){
//         this->name = name;
//         this->account_number = account_number;
//         this->balance = balance;
//         total_customer++;
//         total_balance+=balance;
//     }

//     // Static data member function
//     static void accessStatic(){
//         cout<<"Total number of Customer "<<total_customer<<endl;
//         cout<<"Total Balance "<<total_balance<<endl;
//     }

    // void deposit(int amount){
    //     if(amount>0){
    //         balance+=amount;
    //         total_balance+=amount;
    //     }
    // }

//     void withdraw(int amount){
//         if(amount<=balance && amount>0){
//             balance -= amount;
//             total_balance -= amount;
//         }
//     }

//     void display(){
//         cout<<" "<<account_number<<" "<<balance<<" "<<total_customer<<" "<<total_balance<<endl;
//     }

//     void display_total(){
//         cout<<total_customer<<endl;
//     }
// };

// int Customer::total_customer=0;
// int Customer::total_balance=0;

// int main(){
//     Customer A1("nishant",1,10000);
//     Customer A2("anu",2,12000);
//     Customer A3("Niku",3,20000);
//     Customer::accessStatic();
    // A1.deposit(800);
//     A2.withdraw(500);
//     Customer::accessStatic();
//     // A2.display_total();
//     // Customer::total_customer = 10;
//     // Lets say how much money i have in bank 
// }



// class Customer{
//     public:
//     string name;
//     // since balance is public we can even add -ve 
//     int balance;

//     Customer(string a, int b){
//         name = a;
//         balance = b;
//     }


// };

// int main(){
//     Customer A1("nishant",1000);
//     // This is logicallly incorrect 
//     A1.balance+=-10000;
// }

class Customer{
    string name;
    int balance;
    public:
        Customer(stru )
};
