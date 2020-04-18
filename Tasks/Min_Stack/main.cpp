#include <stack>
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() = default;

    void push(long long x)
    {
        if (stack_.empty())
        {
            stack_.push(x);
            min_el = x;
            return;
        }

        if (x < min_el)
        {
            stack_.push(2 * x - min_el);
            min_el = x;
        }

        else
            stack_.push(x);
    }

    void pop()
    {
        if (stack_.empty())
        {
            return;
        }

        long long top = stack_.top();
        stack_.pop();

        if (top < min_el)
        {
            min_el = 2 * min_el - top;
        }
    }

    int top()
    {
        long long top = stack_.top();

        if (top < min_el)
        {
            return static_cast<int>(min_el);
        }
        else
        {
            return static_cast<int>(top);
        }
    }

    int getMin() {
        return static_cast<int>(min_el);
    }

private:
    std::stack <long long> stack_;
    long long min_el{};
};