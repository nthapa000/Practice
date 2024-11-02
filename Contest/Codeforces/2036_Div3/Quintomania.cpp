#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int notes[n];
        for(int i=0;i<n;i++){
            cin>>notes[i];
        }
        int flag = -1;
        for(int i=0;i<n-1;i++){
            int diff = abs(notes[i]-notes[i+1]);
            if(diff==5 || diff==7){
                continue;
            }
            flag = 1;
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}