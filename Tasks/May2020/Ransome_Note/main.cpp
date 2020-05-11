#include <map>
#include <iostream>


using std::string;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        std::map <char, int> my_magazine;

        for (auto it = magazine.begin(); it != magazine.end(); it++)
            my_magazine[*it]++;

        for (auto it = ransomNote.begin(); it != ransomNote.end(); it++)
        {
            if (!my_magazine[*it]--)
                return false;
        }

        return true;
    }
};


int main()
{
    Solution someSolution;
    string ransomNote = "aba";
    string magazine = "aaabbb";
    std::cout << someSolution.canConstruct(ransomNote, magazine);
}