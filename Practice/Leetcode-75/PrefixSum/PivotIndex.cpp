#include<vector>
#include<algorithm>
#include<numeric>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int rightSum = std::accumulate(nums.begin(),nums.end(),0);
        int leftSum = 0;
        for(int i=0;i<nums.size();i++){            
            rightSum -= nums[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};

// BRute force
class Solution {
public:

        int bruteforce(std::vector<int>&nums)
        {
          for(int i=0;i<nums.size() ; i++)
        {
            int lsum=0;
            int rsum=0;

            for(int j=0 ; j<i ; j++)
            {
                lsum += nums[j];
            }

            for(int j=i+1 ; j<nums.size() ; j++)
            {
                rsum += nums[j];
            }

            if(lsum==rsum) return i;
            
        }
        return -1;
        }
       
    int pivotIndex(std::vector<int>& nums) {
            return bruteforce(nums);
    }   
};