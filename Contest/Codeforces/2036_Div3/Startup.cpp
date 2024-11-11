#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        // no. of shelves
        int n;
        cin>>n;

        // no. of bottles available
        int k;
        cin>>k;

        map<int,vector<int>> bottles;
        int totalSum = 0;
        
        for(int i=0;i<k;i++){
            int index,cost;
            cin>>index;
            cin>>cost;
            totalSum+=cost;
            if(bottles.find(index)!= bottles.end()){
                vector<int> curr = bottles[index];
                curr.push_back(cost);
                bottles[index]=curr;
            }
            else{
                bottles[index]={cost};
            }
        }
        int length= bottles.size();
        if(n>=length){
            cout<<totalSum<<endl;
        }else{

        }

    }
}