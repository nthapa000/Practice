#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cntZero=0;
        int index =0;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            if(nums[i]==0){
                cntZero++;
            }else{
                nums[index]=temp;
                index++;
            }
        }
        for(int i = index;i<nums.size();i++){
            nums[i]=0;
        }
    }
};

// Two pointer 
// Two pointer
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
};