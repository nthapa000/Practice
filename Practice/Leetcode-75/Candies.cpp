// #include<iostream>
// #include<vector>
// #include<algorithm>

// class Solution {
// public:
//     std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
//         int maxCandy = candies[0];
//         int len = candies.size();
//         for(int i=0;i<len;i++){
//             if(candies[i]>maxCandy)
//                 maxCandy=candies[i];
//         }
//         std::vector<bool> ans(len);
//         for(int i=0;i<len;i++){
//             if((extraCandies + candies[i])>=maxCandy){
//             ans.push_back(true);
//             }else{
//                 ans.push_back(false);
//             }
//         }
//     return ans;
//     }
// };

// int main(){
//     std:: vector<int> candies;
//     int extraCandies;
//     std:: vector<bool> kidWithGreaterCandies;
    
// }

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(const std::vector<int>& candies, int extraCandies) {
        int maxCandy = *std::max_element(candies.begin(), candies.end());
        int len = candies.size();
        std::vector<bool> ans(len);  // Allocate the vector to hold boolean values

        for (int i = 0; i < len; ++i) {
            ans[i] = (candies[i] + extraCandies >= maxCandy);  // Direct assignment
        }
        return ans;
    }
};

int main() {
    int n, extraCandies;

    // Input the number of kids and their candies
    std::cout << "Enter the number of kids: ";
    std::cin >> n;

    std::vector<int> candies(n);
    std::cout << "Enter the number of candies each kid has: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> candies[i];
    }

    // Input the number of extra candies
    std::cout << "Enter the number of extra candies: ";
    std::cin >> extraCandies;

    Solution solution;
    std::vector<bool> kidWithGreaterCandies = solution.kidsWithCandies(candies, extraCandies);

    // Output the results
    std::cout << "Kids who can have the greatest number of candies: ";
    for (bool canHaveMaxCandies : kidWithGreaterCandies) {
        std::cout << (canHaveMaxCandies ? "true " : "false ");
    }
    std::cout << std::endl;

    return 0;
}
