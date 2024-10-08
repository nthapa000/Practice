// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>

// class Solution {
// public:
//     std::string reverseVowels(std::string s) {
//         std::string vowel="";
//         int lenStr=s.length();
//         for(int i=0;i<lenStr;i++){
//             // current Character
//             char c=s[i];
//             if(c=='a' || c=='e'||c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
//                 vowel+=c;
//             }
//         }
//         std::string copyStr=s;
//         int vowelIndex=vowel.length()-1;
//         for(int i=0;i<lenStr;i++){
//             // current Character
//             char c=s[i];
//             if(c=='a' || c=='e'||c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
//                 copyStr[i]=vowel[vowelIndex];
//                 vowelIndex--;
//             }
//         }
//         return copyStr;
//     }

// };

#include <iostream>
#include <string>

class Solution {
public:
    // Helper function to check if a character is a vowel
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    std::string reverseVowels(std::string s) {
        std::string vowels = "";

        // Collect all the vowels from the string
        for (char c : s) {
            if (isVowel(c)) {
                vowels += c;
            }
        }

        // Replace the vowels in the string with the reversed vowels
        int vowelIndex = vowels.length() - 1;
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[vowelIndex--];  // Replace with reversed vowels
            }
        }

        return s;
    }
};

int main() {
    Solution solution;

    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result = solution.reverseVowels(input);
    std::cout << "String after reversing vowels: " << result << std::endl;

    return 0;
}

// Third approach Two pointer
class Solution 
{
	
public:
    std::string reverseVowels(std::string s) 
    {
        int i = 0;
        int j = s.size()-1;
        
        while(i<j)
        {
            bool flag1 = false, flag2 = false;   // to check if we are pointing to a vowel or not
            
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            flag1 = true;
            
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U')
            flag2 = true;
            
            if(flag1 && flag2)   // if both are pointing to vowels just swap them
            {
                std::swap(s[i],s[j]);
                i++;j--; 
            }
            
            if(!flag1)    // if i is not pointing to a vowel, move the pointer forward
            i++;
            if(!flag2)    // if j is not pointing to a vowel, move the pointer backwards
            j--;
        }
        
        return s;
    } 
};