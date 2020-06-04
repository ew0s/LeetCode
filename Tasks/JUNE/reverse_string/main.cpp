#include <vector>


using std::vector;

class Solution {
public:
    void reverseString(vector<char>& s) {

        char * left;
        char * right;

        if (!s.empty())
        {
            left = &s[0];
            right = &s[s.size() - 1];
        }
        else
            return;

        while (left < right)
        {
            std::swap (*left, *right);
            left++;
            right--;
        }
    }
};