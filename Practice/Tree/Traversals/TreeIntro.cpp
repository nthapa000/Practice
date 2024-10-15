#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countNodes(int i) {
        // your code here
        int nodeAtLevel = (int)pow(2,i-1);
        return nodeAtLevel;
        
    }
};