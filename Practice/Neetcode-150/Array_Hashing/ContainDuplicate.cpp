// #include<iostream>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         int len = nums.size();

//         // Edge case: If the array has 0 or 1 elements, no duplicates are possible
//         if(len <=1) return false;

//         for(int i=0;i<len;i++){
//             int currEle = nums[i];
//             for(int j=i+1;j<len;j++){
//                 int innerEle = nums[j];
//                 if(currEle==innerEle){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// int main(){
//     Solution obj;
//     vector<int> nums = {1, 2, 3, 4, 5, 6};
//     bool result = obj.containsDuplicate(nums);
//     if (result) {
//         cout << "The array contains duplicate elements." << endl;
//     } else {
//         cout << "The array does not contain duplicate elements." << endl;
//     }
//     return 0;

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     // Function to check for duplicates using an auxiliary array
//     bool containsDuplicate(const vector<int>& nums) {
//         if (nums.empty()) return false;

//         // Find the range of numbers to determine array size
//         int minValue = nums[0], maxValue = nums[0];
//         for (int num : nums) {
//             if (num < minValue) minValue = num;
//             if (num > maxValue) maxValue = num;
//         }

//         // Calculate the size of the auxiliary array
//         int offset = -minValue; // Offset for negative numbers
//         int arraySize = maxValue - minValue + 1;

//         // Create a boolean array initialized to false
//         vector<bool> seen(arraySize, false);

//         // Check for duplicates
//         for (int num : nums) {
//             int index = num + offset; // Adjust index for negative values
//             if (seen[index]) {
//                 return true; // Duplicate found
//             }
//             seen[index] = true;
//         }

//         return false; // No duplicates found
//     }
// };

// int main() {
//     Solution obj;

//     // Input array
//     vector<int> nums;

//     // Input the size of the array
//     cout << "Enter the size of the array: ";
//     int n;
//     cin >> n;

//     // Validate input size
//     if (n < 0) {
//         cerr << "Error: Array size cannot be negative." << endl;
//         return 1; // Exit with error
//     }

//     // Input array elements
//     cout << "Enter " << n << " elements: ";
//     nums.resize(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     // Call the function and display the result
//     bool result = obj.containsDuplicate(nums);
//     if (result) {
//         cout << "The array contains duplicate elements." << endl;
//     } else {
//         cout << "The array does not contain duplicate elements." << endl;
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(const vector<int>& nums) {
//         set<int> checkIfPresent;
//         int len = nums.size();
//         for(int i=0;i<len;i++){
//             int currEle= nums[i];
//             if(checkIfPresent.find(currEle)!=checkIfPresent.end()){
//                 return true;
//             }
//             checkIfPresent.insert(currEle);
//         }
//         return false;
//     }
// };

// Shorted Approach
// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         bool flag = false;
//         for(int i =0;i<nums.size()-1;i++){
//             if(nums[i] == nums[i+1]) return true;
//         }
//         return flag;
//     }
// };

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> freqEle;
        for(auto ele:nums){
            freqEle[ele]++;
        }
        for(auto ele:freqEle){
            if(ele.second>1){
                return true;
            }
        }
        return false;   
    }
};