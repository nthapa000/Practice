#include<iostream>
#include<vector>
#include<algorithm>

// Wrong Solution
class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int countZero=0;
        int countOne=0;
        int lengthFlowerbed=flowerbed.size();
        for(int i=0;i<lengthFlowerbed;i++){
            if(flowerbed[i]==0){
                countZero++;
            }else{
                countOne++;
            }
        }
        if((countZero-countOne)/2 >=n){
            return true;
        }else{
            return false;
        }
    }
};

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            // Check if the current plot is empty.
            if (flowerbed[i] == 0) {
                // Check if the left and right plots are empty.
                bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
                // We check whether i==0 or not since flowerbed [i-1] can result in error , and in or condition if one condition is true it doesn't even check the other condition
                bool emptyRightPlot =
                    (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

                // If both plots are empty, we can plant a flower here.
                if (emptyLeftPlot && emptyRightPlot) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
};

// Approach 2: 
class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(),0);
        flowerbed.push_back(0);
        for(int i = 1; i < flowerbed.size()-1; ++i)
        {
            if(flowerbed[i-1] + flowerbed[i] + flowerbed[i+1] == 0)
            {
                --n;
                ++i;
            }
                
        }
        return n <=0;
    }
};