#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

class Solution {
public:
        double findMaxAverage(std::vector<int>& nums, int k) {
        double sum=0, res=INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(i<k) sum+=nums[i];
            else {
                res=std::max(sum, res);
                sum+=nums[i]-nums[i-k];
            }
        }
        res=std::max(sum, res);
        return res/k;
    }
};