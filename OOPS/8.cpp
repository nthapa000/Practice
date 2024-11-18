#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("z1.txt");
    fout<<"Hello India \n";
    fout<<"Hello Bawee \n";
    fout<<"Hello Bhai \n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");
    string line;
    // this loop runs till the file ends

    while(getline(fin,line)){
        cout<<line<<endl;
    }

    fin.close();
}

// int main(){
//     vector<int> arr(5);
//     cout<<"Enter the input "<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     // open the file
//     ofstream fout;
//     fout.open("zero.txt");
//     fout<<"Orginal Data \n";
//     for(int i=0;i<5;i++){
//         fout<<arr[i]<<" ";
//         // data will be saved
//     }
//     fout<<"\n Sorted Data \n";
    
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<5;i++){
//         fout<<arr[i]<<" ";
//         // data will be saved
//     }
//     fout.close();
// }

// int main(){
//     // File present in secondary memory
//     // Open the file
//     ofstream fout;
//     // open() is a member function
//     fout.open("hell0.txt");
//     // check whether the file exist or not if not then create on its own

//     // Write on the file 
//     fout<<"Hello India \n";
//     // close() to release the resources which handle this file
//     fout.close();
// }