#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age, roll_number;
    string grade;
};

int main(){
    Student *S= new Student;
    (*S).name = "Nishant";
    S->age = 29;
    S->roll_number = 29;
    S->grade = "Btech";
    cout<<S->name<<endl; 
}

// class a{
// // even empty class object will take a byte space
// };


// class b{
//     char d;
//     int c;
//     char b;
// };

// class e{
//     char f;
//     char g;
//     int h;
// };
// int main(){
//     e obj;
//     cout<<sizeof(obj)<<endl;
//     b obj1;
//     cout<<sizeof(obj1)<<endl;//8 byte    
// }

// class Student {
//     string name;
//     int age;
//     int roll_number;
//     string grade;
//     public:
//     // public so it can be accessed outside
//         void setName(string n){
//             name=n;
//         }
//         void setAge(int a){
//             age=a;
//         }
//         void setRoll(int r){
//             roll_number=r;
//         }
//         void setGrade(string g){
//             grade=g;
//         }
//         string getName(){
//             return name;
//         }
//         int getAge(){
//             return age;
//         }
//         string getGrade(int pin){
//             if(pin==123){
//                 return grade;
//             }
//             return "Wrong pin"; 
//         }
        
// };

// int main(){
//     Student S1;
//     S1.setName("Nishant");
//     S1.setAge(22);
//     S1.setRoll(29);
//     S1.setGrade("Btech");
//     // Similarly we can declare the second studen and give all the following
//     cout<<S1.getName()<<endl;
//     cout<<S1.getAge()<<endl;

// }

// int main(){
//     // Let say we store the name of one student 
//     string name;
//     int age,roll_no;
//     string grade;
//     cin>>name>>age>>roll_no>>grade;

//     string name1;
//     int age1,roll_no1;
//     string grade1;

//     f();
// }

// void f(){
//     string name;
//     int age,roll_no;
//     string grade;
// }