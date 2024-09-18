// https://codeforces.com/problemset/problem/1900/A
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int count1=0;
        int count2=0;
        int ans=0;
        for(int i=0; i<n;i++){
            if(s[i]=='.'){
                count1++;
            }
            if(count1>2){
                ans=2;
                break;
            }
            if(s[i]=='#'){
                count2=count2+count1;
                count1=0;
            }
           
        }
        count2=count2+count1;
        if(count1<=2){
            ans=count2;
        }
        cout<<ans<<endl;
    }
}