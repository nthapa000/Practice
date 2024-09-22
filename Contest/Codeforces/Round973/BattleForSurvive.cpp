#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    // n fighters
    // ith fighter has rating ai
    // n-1 battles
    // two not eliminated fighters i and j are choosen
    // since i<j i is elimated in this battle and 
    // j rating is now aj=aj-ai
    // fighter rating can be negatice and indexes do not change
    // what will be the rating of last remaining fighter 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
    }
}