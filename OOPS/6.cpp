#include<bits/stdc++.h>
using namespace std;

// class Area{
//     public:
//     // Function overload both function have same name the difference is on parameter only
//     int calculateArea(int r){
//         return 3.14*r*r;
//     }
//     // return rectangle area
//     int calculateArea(int l, int b){
//         return l*b;
//     }
// };

// int main(){
//     Area A1;
//     // Find area of rectangle
//     cout<<A1.calculateArea(4)<<endl;
//     // Find area of circle
//     cout<<A1.calculateArea(3,4)<<endl;
// }

// class Complex{
//     int real;
//     int img;
//     public:
//     Complex(){

//     }
//     Complex(int real,int img){
//         this->real = real;
//         this->img = img;
//     }
//     // we can write operator as function
//     void display(){
//         cout<<real<<" +i "<<img<<endl;
//     }

//     // Operator overloading
//     // We can access private member if the object if of same class
//     Complex operator +(Complex &C){
//         Complex ans;
//         ans.real = real + C.real;
//         ans.img = img + C.img;
//         return ans;
//     }
// };

// int main(){
//     Complex C1(3,4);
//     Complex C2(4,6);
//     Complex C3 = C1+C2;
//     C3.display();
// }

// class Animal{
//     public:
//     virtual void speak(){
//         cout<<"WOAH woah"<<endl;
//     }
// };

// class Dog: public Animal{
//     public:
//     void speak(){
//         cout<<"Bark"<<endl;
//     }
// };

// int main(){
//     Animal *p ;
//     // whenever new keyword is use allocation is done during run time
//     p = new Dog();
//     // p is animal type pointer, and on the compile time it decided that since p is Animal type pointer hence it will prints Animal class speaks() funciton
//     // To get Bark we need to use virtual keyword.
//     p->speak();
//     // it printed Woah woah
// }

// // When code compiled  , p point to Animal pointer 

class Animal{
    public:

    virtual void speaks(){
        cout<<"Huhu \n";
    }


};

class Dog: public Animal{
    public:

    void speaks(){
        cout<<"Bark \n";
    }
};

class Cat: public Animal{
    public:

    void speaks(){
        cout<<"Meow \n";
    }
};
int main(){
    // Animal *p;
    // p = new Dog();
    // p->speaks();
    // It will raise error that p is a pointer of Animal type and hence it doesn't have any function called roti
    // p->roti();
    // Why didn't we created Dog class directly 

    Animal *p;
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0;i<animals.size();i++){
        p = animals[i];
        p->speaks();
    }
}