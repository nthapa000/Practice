#include<bits/stdc++.h>
using namespace std;

class Human{
    // made this info private since this is unnecessary to know and these part cannot be inherited
    string Religion,color;
    protected:
    // If we make a object of Human class then these cannot be directly accessed and also since we make it protected now these part can be inherited
    string name;
    int age;
    int weight;

};

// child class
class Student: private Human{
    private:
    int roll_number;
    int fees;
    // when Human data members is protected then in Student class it is also protected hence we cant access it
    public:
    // Here name age and weight are considered as the private members and we cannot access religion and color in the Student(derived) class since it was defined as private in the Human Class (Base class)
    Student(string name, int age, int weight, int roll_number,int fees){
        this->name = name;
        this->weight = weight;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" age is "<<age<<", weight is "<<weight<<", rolll number is "<< roll_number<<",fees is "<<fees<<" ";
    }
};

int main(){
    Student A("Nishant",22,66,29,200000);
    A.display();
    // Nishant age is 22, weight is 66, rolll number is 29,fees is 200000
}


// class Human {
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     // This function can be inside any private protected or public we wont get error
//     void fun(){
//         a = 10;
//         b = 20;
//         c = 30;
//     }
// };

// // Derived class
// // public is access modifier , data inside Student class which is in Human class let say How should that thing look inside the Human class is what we want 
// // for example if we choose access modifier to be private in the Student class then for example public data variable in Human class that is c will be private in Student class
// class Student: public Human{

// };

// int main(){
//     Human Thapa;
//     // Thapa.b=22; Error , same for private variable
//     Thapa.c=22;

// }

