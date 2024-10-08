// Editorial 
// Approach 1: Brute


// My code
// #include<iostream>
// #include<string>
// #include<algorithm>

// class Solution {
// public:
//     std::string gcdOfStrings(std::string& str1, std::string& str2) {
//         int len1= str1.length();
//         int len2= str2.length();
//         std::string ans="";
//         int gcd= std::__gcd(len1,len2);
//         std::string gcdString1=str1.substr(0,gcd);
//         std::string gcdString2=str2.substr(0,gcd);
//         if(!(gcdString1==gcdString2)){
//             return ans;
//         }
//         int maxLen= std::max(len1,len2);
//         int countLen=0;
//         std::string stringCheck="";
//         for(int i=0;i<len1;i++){
//             countLen++;
//             stringCheck+=str1[i];
//             if(countLen==gcd){
//                 if(!(stringCheck==gcdString1)){
//                     return ans;
//                 }else{
//                     countLen=0;
//                     stringCheck="";
//                 }
//             }
//         }
        
//         int countLen1=0;
//         std::string stringCheck1;
//         for(int i=0;i<len2;i++){
//             countLen1++;
//             stringCheck1+=str2[i];
//             if(countLen1==gcd){
//                 if(!(stringCheck1==gcdString1)){
//                     return ans;
//                 }else{
//                     countLen1=0;
//                     stringCheck1="";
//                 }
//             }
//         }
//         ans=gcdString1;
//         return ans;
//     }
// };

// int main(){
//     std::string word1,word2;
//    // Input the two words
//    std::cout << "Enter first word: ";
//    std::cin >> word1;
//    std::cout << "Enter second word: ";
//    std::cin >> word2;

//    Solution solution;
//     std::string commonString=solution.gcdOfStrings(word1,word2);
//     std::cout << "CommonString: " << commonString << std::endl;
// }


//production version
#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    std::string gcdOfStrings(const std::string& str1, const std::string& str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int gcdLength = std::__gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLength);
    }
};

int main() {
    std::string word1, word2;

    std::cout << "Enter first word: ";
    std::cin >> word1;
    std::cout << "Enter second word: ";
    std::cin >> word2;

    Solution solution;
    std::string commonString = solution.gcdOfStrings(word1, word2);

    if (!commonString.empty()) {
        std::cout << "Common GCD string: " << commonString << std::endl;
    } else {
        std::cout << "No common divisor string exists." << std::endl;
    }

    return 0;
}

