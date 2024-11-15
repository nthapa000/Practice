// #include<bits/stdc++.h>
// using namespace std;

// class Human{
//     protected:
//     string name;
//     int age;

//     public:

//     void work(){
//         cout<<"I am working \n";   
//     }
// };

// class Student: public Human{
//     int roll_number,fees;
//     public:
//     Student(string name, int age, int roll_number, int fees){
//         this->name = name;
//         this->age = age;
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }
// };

// int main(){
//     Student A1("Nishant",22,29,1000);
//     // since access modifier is public
//     A1.work();
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Human{
//     protected:
//     string name;
//     int age;

//     public:
//     ~Human(){
//         cout<<"Hello Human"<<endl;
//     }

//     void work(){
//         cout<<"I am working \n";   
//     }
// };

// class Student: public Human{
//     int roll_number,fees;
//     public:
//     ~Student(){
//         cout<<"Hello Student"<<endl;
//     }
// };

// int main(){
//     Student A1;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class Human{
//     protected:
//     string name;
//     int age;

//     public:
    
//     Human(string name,int age){
//         this->name = name;
//         this->age = age;
//     }

//     void display(){
//         cout<<"I am working \n";   
//     }
// };

// class Student: public Human{
//     int roll_number,fees;
//     public:
//     Student(string name, int age, int roll_number, int fees):Human(name,age){
//         // Instead of Writing this we can call the Human Constructor
//         // this->name = name;
//         // this->age = age;
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }
//     void display(){
//         cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<" "<<endl;
//     }
// };

// int main(){
//     Student A1("Nishant",22,29,1000);
//     A1.display();
// // Nishant 22 29 1000 
// }


// MULTI LEVEL INHERITANCE
// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     protected:
//     string name;

//     public:

//     void introduce(){
//         cout<<"Hello my name is "<<name<<endl;
//     }
// };

// class Employee:public Person{
//     protected:
//     int salary;

//     public:
//     void monthly_salary(){
//         cout<<"My monthly salary is "<<salary<<endl;
//     }
// };

// class Manager: public Employee{
//     public:
//     string department;
    
//     Manager(string name,int salary, string department){
//         this->name = name;
//         this->salary = salary;
//         this->department = department;
//     }

//     void work(){
//         cout<<"I am leading Department "<<department<<endl;
//     }
// };

// int main(){
//     Manager A1("Nishant",100000,"Tech");
//     A1.work();
//     A1.monthly_salary();
//     A1.introduce();
// }

// Multilevel
#include<bits/stdc++.h>
using namespace std;

// class Engineer{
//     public:
//     string specialization;

//     void work(){
//         cout<<"I have specialization in "<<specialization<<endl;
//     }
// };

// class Youtuber{
//     public:
//     int subscriber;

//     void contentcreator(){
//         cout<<"I have a subscriber of base "<<subscriber<<endl;
//     }
// };

// class CodeTeacher: public  Engineer, public Youtuber{
//     public:
//     string name;

//     CodeTeacher(string name, string specialization, int subscriber){
//         this->name = name;
//         this->specialization = specialization;
//         this->subscriber = subscriber;
//     }

//     void showcase(){
//         cout<<"My name is "<<name<<endl;
//         work();
//         contentcreator();
//     }
// };

// int main(){
//     CodeTeacher A1("Nishant","CSE",5);
//     A1.showcase();
// }

// Hierachical

// class Human {
//     protected:
//     string name;
//     int age;

//     public:
//     Human(){

//     };

//     Human(string name,int age){
//         this->name = name;
//         this->age = age;
//     }

//     void display(){
//         cout<<name<<" "<<age<<" \n";
//     }

//     void work(){
//         cout<<"Iam working "<<endl;
//     }
// };

// class Student: public Human{
//     int roll_number, fees;
//     public:
//     Student(string name, int age, int roll_number, int fees):Human(name,age){
//         this->roll_number = roll_number;
//         this->fees = fees;
//     }

//     void display(){
//         cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
//     }
// };

// class Teacher:public Human{
//     int salary;
//     public: 
//     Teacher(int salary, string name, int age){
//         this->salary = salary;
//         this->name = name;
//         this-> age = age;
//     }

//     void display(){
//         cout<<name<<" "<<age<<" "<<salary<<endl;
//     }
// };

// int main(){
//     Student A1("Nishant", 22,10,99);
//     A1.display();
//     Teacher A2(99,"Thapa",23);
// }

// Hybrid Inheritance

// student
// class Student{
//     public:
//     void print(){
//         cout<<"I am a Student \n";
//     }
// };

// // male
// class Male{
//     public:
//     void malePrint(){
//         cout<<"I am Male\n";
//     }
// };

// // femaile
// class Female{
//     public:
//     void femalePrint(){
//         cout<<"I am Male\n";
//     }
// };

// // boy
// class Boy: public Student, public Male{
//     public:
//     void Boyprint(){
//         cout<<"i am Boy \n";
//     }
// };

// // girl
// class Girl: public Student, public Female{
//     public:
//     void Girlprint(){
//         cout<<"i am Girl \n";
//     }
// };

// int main(){
//     Girl G1;
//     G1.Girlprint();
//     G1.print();
// }

class Human{
    public: 
    string name;

    void display(){
        cout<<"My name is "<<name<<endl;
    }
};  

class Engineer:public virtual Human{
    public:
    string specialization;

    void work(){
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber:public virtual Human{
    public:
    int subscribers;
    
    void contentCreator(){
        cout<<"I have a subscriber base of"<<subscribers<<endl;
    }
};

class CodeTeacher:public Youtuber,public Engineer{
    public:
    int salary;

    CodeTeacher(){

    }

    CodeTeacher(string name,string specialization, int subsribers,int salary){
        this->name = name;
        // name is ambigous
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }
};

int main(){
    CodeTeacher A1("Nishant","CSE",500000,30);
    // Two name and two display of Human class present in CodeTeacher object, we have to tell them to consider them unique and just use virtual
    A1.display();
}