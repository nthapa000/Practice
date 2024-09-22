#include<bits/stdc++.h>
using namespace std;

int main(){
    // n fruits
    // blender can mix up to x fruits per second
    // each sech Zhan put y fruits in blender
    // blender will blend min(x,c) fruits
    // c is no. of fruits inside blender
    // min time requiired to blend all fruits

    int t;
    cin>>t;
    while(t--){
        int nFruits;
        cin>>nFruits;
        int fruitsBlendPerSec, fruitsPutPerSec;
        cin>>fruitsBlendPerSec>>fruitsPutPerSec;
        int ans1=0;
        if(nFruits%fruitsBlendPerSec==0){
            ans1=nFruits/fruitsBlendPerSec;
        }else{
            ans1=nFruits/fruitsBlendPerSec;
            ans1++;
        }
        int ans2=0;
        if(nFruits%fruitsPutPerSec==0){
            ans2=nFruits/fruitsPutPerSec;
        }else{
            ans2=nFruits/fruitsPutPerSec;
            ans2++;
        }
        int ans=max(ans1,ans2);
        cout<<ans<<endl;
    }
}