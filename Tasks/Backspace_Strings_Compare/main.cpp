#include <stack>
#include <iostream>
using std::string;
using std::stack;

class Solution {

    void reassemble_word (stack <char>& word, char letter)
    {
        if (letter != '#')
            word.push(letter);

        else
            if (!word.empty())
                word.pop();
    }

    bool isEqual (stack <char> & first_word, stack <char> & second_word)
    {
        if (first_word.size() != second_word.size())
            return false;

        while (!first_word.empty())
        {
            if (first_word.top() != second_word.top())
                return false;

            first_word.pop();
            second_word.pop();
        }

        return true;
    }

public:

    bool backspaceCompare(string S, string T) {

        std::stack <char> first_word;
        std::stack <char> second_word;

        unsigned int len_first = 0;
        unsigned int len_second = 0;

        while (S.length() != len_first || T.length() != len_second)
        {
            if (S.length() == len_first)
            {
                reassemble_word(second_word, T[len_second]);
                len_second++;
            }

            else if (T.length() == len_second)
            {
                reassemble_word(first_word, S[len_first]);
                len_first++;
            }

            else
            {
                reassemble_word(first_word, S[len_first]);
                reassemble_word(second_word, T[len_second]);
                len_first++;
                len_second++;
            }
        }

        return isEqual(first_word, second_word);
    }
};

int main ()
{
    string one = "a##c";
    string two = "#a#c";

    Solution somesolution;
    (somesolution.backspaceCompare(one, two)) ? std::cout << "yes" : std::cout << "no";
}