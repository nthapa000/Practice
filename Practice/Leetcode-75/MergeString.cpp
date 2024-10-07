#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string mergeAlternately(const std::string& word1, const std::string& word2) {
        int len1 = word1.length();
        int len2 = word2.length();
        int minLen = std::min(len1, len2);
        std::string ans;
        ans.reserve(len1 + len2);  // Pre-allocate memory to improve performance

        // Merging the two strings alternately
        for (int i = 0; i < minLen; ++i) {
            ans += word1[i];
            ans += word2[i];
        }

        // Append the remaining part of the longer string, if any
        if (len1 > minLen) {
            ans += word1.substr(minLen);
        } else if (len2 > minLen) {
            ans += word2.substr(minLen);
        }

        return ans;
    }
};

int main() {
    std::string word1, word2;

    // Input the two words
    std::cout << "Enter first word: ";
    std::cin >> word1;
    std::cout << "Enter second word: ";
    std::cin >> word2;

    // Create an instance of Solution and call mergeAlternately
    Solution solution;
    std::string mergedWord = solution.mergeAlternately(word1, word2);

    // Output the merged string
    std::cout << "Merged string: " << mergedWord << std::endl;

    return 0;
}


// My version
// Error in line ans+=word1[i]+word2[i];
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int len1 = word1.length();
//         int len2 = word2.length();
//         int minLen = min(len1,len2);
//         string ans="";
//         int i;
//         for( i=0;i<minLen;i++){
//             ans+=word1[i]+word2[i];
//         }
//         if(i+1<len1){
//             ans+=word1.substr(i+1);
//         }
//         if(i+1<len2){
//             ans+=word2.substr(i+1);
//         }
//         return ans;
//     }
// };

// Version 2
// Wrong
// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int len1 = word1.length();
//         int len2 = word2.length();
//         int minLen = min(len1,len2);
//         string ans="";
//         int i=0;
//         for( i=0;i<minLen;i++){
//             ans+=word1[i];
//             ans+=word2[i];
//         }
//         if(i+1<len1){
//             ans+=word1.substr(i);
//         }
//         if(i+1<len2){
//             ans+=word2.substr(i);
//         }
//         return ans;
//     }
// };

// Version 3
// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         int len1 = word1.length();
//         int len2 = word2.length();
//         int minLen = min(len1,len2);
//         string ans="";
//         int i=0;
//         for( i=0;i<minLen;i++){
//             ans+=word1[i];
//             ans+=word2[i];
//         }
//         if(i<len1){
//             ans+=word1.substr(i);
//         }
//         if(i<len2){
//             ans+=word2.substr(i);
//         }
//         return ans;
//     }
// };

// Approach 1: Two pointer 
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int m = word1.size();
        int n = word2.size();
        std::string result = "";
        int i = 0, j = 0;

        while (i < m || j < n) {
            if (i < m) {
                result.push_back(word1[i++]);
            }
            if (j < n) {
                result.push_back(word2[j++]);
            }
        }

        return result;
    }
};

// Approach 2: One pointer
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        string result = "";

        for (int i = 0; i < max(m, n); i++) {
            if (i < m) {
                result.push_back(word1[i]);
            }
            if (i < n) {
                result.push_back(word2[i]);
            }
        }

        return result;
    }
};
