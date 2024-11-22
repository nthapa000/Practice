// #include<iostream>
// #include<map>

// using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int lenS = s.size();
//         int lenT = t.size();

//         // Anagram is possible
//         if(lenS!=lenT){
//             return false;
//         }
        
//         map<char,int> freqS;
//         map<char,int> freqT;

//         for(int i=0;i<lenS;i++){
//             freqS[s[i]]++;
//             freqT[t[i]]++;
//         }

//         // frequency of alphabets of both s and t are same
//         if(freqS==freqT){
//             return true;
//         }
//         return false;
//     }
// };


// #include <iostream>
// #include <unordered_map>
// #include <string>

// class Solution {
// public:
//     bool isAnagram(const std::string& s, const std::string& t) {
//         if (s.size() != t.size()) {
//             return false;
//         }

//         // Frequency map to count character occurrences
//         std::unordered_map<char, int> freq;

//         // Increment counts for characters in 's' and decrement for 't'
//         for (size_t i = 0; i < s.size(); ++i) {
//             freq[s[i]]++;
//             freq[t[i]]--;
//         }

//         // Check if all counts are zero
//         for (const auto& entry : freq) {
//             if (entry.second != 0) {
//                 return false;
//             }
//         }

//         return true;
//     }
// };

// int main() {
//     Solution solution;

//     std::string s, t;
//     std::cout << "Enter the first string: ";
//     std::cin >> s;
//     std::cout << "Enter the second string: ";
//     std::cin >> t;

//     if (solution.isAnagram(s, t)) {
//         std::cout << "The strings are anagrams.\n";
//     } else {
//         std::cout << "The strings are not anagrams.\n";
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;
//         int n = s.length();
//         unordered_map<char, int> counts;
//         for (int i = 0; i < n; i++) {
//             counts[s[i]]++;
//             counts[t[i]]--;
//         }
//         for (auto count : counts)
//             if (count.second) return false;
//         return true;
//     }
// };

// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     bool isAnagram(string s, string t) { 
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t; 
//     }
// };

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s==t) return true;
        if (s.size()!=t.size()) return false;
        int umap[26]={};
        for (int i=0; i<s.size(); i++) {
            umap[s[i]-'a']++;
            umap[t[i]-'a']--;
        }
        for (int i=0; i<26; i++) {
            if (umap[i]) return false;
        }
        return true;
    }
};