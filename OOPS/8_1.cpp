// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     ifstream fin;
//     // file ko open karo
//     fin.open("hell0.txt");
//     char c;
//     fin>>c;
//     cout<<c<<endl;
//     // H 
//     // since H is the first character on the hell0.txt

//     // eof means end of file , if reached return 1
//     while(!fin.eof()){
//         cout<<c;
//         fin>>c;
//     }
//     fin.close();
//     // HelloIndia
//     // It doesn't give space , tab and doesn't treat them as character

// }

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    // file ko open karo
    fin.open("hell0.txt");
    char c;
    c=fin.get();
    cout<<c<<endl;
    // H 
    // since H is the first character on the hell0.txt

    // eof means end of file , if reached return 1
    while(!fin.eof()){
        cout<<c;
        c=fin.get();
    }
    fin.close();
    // Hello India
}