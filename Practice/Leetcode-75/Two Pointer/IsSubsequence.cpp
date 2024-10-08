// Approach 1: 
// #include <iostream>
// #include <string>

// class Solution
// {
// public:
//     bool isSubsequence(std::string s, std::string t)
//     {
//         int stringLen = t.length();
//         int substrIndex = 0;
//         int substrLength = s.length();
//         if(s==""){
//             return true;
//         }
//         for (int i = 0; i < stringLen; i++)
//         {
//             char substrChar = s[substrIndex];
//             if (substrChar == t[i])
//             {
//                 if (substrIndex == (substrLength - 1))
//                 {
//                     return true;
//                 }
//                 substrIndex++;
//             }
//         }
//         return false;
//     }
// };

#include <iostream>
#include <string>

class Solution {
public:
    bool isSubsequence(const std::string& s, const std::string& t) {
        // Handle empty subsequence case
        if (s.empty()) {
            return true;
        }

        int tLen = t.length();
        int sLen = s.length();
        int sIndex = 0;

        // Traverse through the string t
        for (int i = 0; i < tLen; i++) {
            if (t[i] == s[sIndex]) {
                sIndex++;  // Move to the next character in subsequence
                if (sIndex == sLen) {
                    return true;  // All characters of subsequence found
                }
            }
        }

        return false;  // Subsequence not found
    }
};

int main() {
    Solution solution;

    std::string s, t;
    std::cout << "Enter subsequence string (s): ";
    std::cin >> s;

    std::cout << "Enter main string (t): ";
    std::cin >> t;

    bool result = solution.isSubsequence(s, t);
    if (result) {
        std::cout << "\"" << s << "\" is a subsequence of \"" << t << "\"" << std::endl;
    } else {
        std::cout << "\"" << s << "\" is not a subsequence of \"" << t << "\"" << std::endl;
    }

    return 0;
}


// Recursion
class Solution {
    int isSubSequence(std::string& s1,std::string& s2, int i, int j)
{
    if (i == 0 || j == 0) {
        return 0;
    }
    if (s1[i - 1] == s2[j - 1]) {
        return  1 + isSubSequence(s1, s2, i - 1, j - 1);
    }
    else {
        return  isSubSequence(s1, s2, i, j - 1);
    }
}
 
public:
    bool isSubsequence(std::string s, std::string t) {
         int m = s.size();
    int n = t.size();
    if (m > n) {
        return false;
    }
    if (isSubSequence(s, t, m, n) == m) {
        return true;
    }
    else {
        return false;
    }
    }
};