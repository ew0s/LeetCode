#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using std::vector;

class Solution {
public:
    int findComplement(int num) {

        vector <char> bits;
        while (true)
        {
            bits.push_back(num % 2);
            num /= 2;
            if (num == 0)
                break;
        }

        int num_length = bits.size() - 1;
        std::reverse(bits.begin(), bits.end());
        for (char & bit : bits)
        {
            bit = 1^bit;
            reverse_num += (bit * pow(2, num_length));
            num_length--;
        }

        return reverse_num;
    }

private:
    int reverse_num = 0;
};


int main()
{
    Solution some;
    std::cout << some.findComplement(1);
}