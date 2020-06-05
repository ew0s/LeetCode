#include <vector>

using std::vector;


class Solution {
public:

    Solution(vector<int>& w) {
        for(auto x:w)
        {
            sum+=x;
            s.push_back(sum);
        }
    }

    int pickIndex() {
        int x=rand()%sum;
        auto it=upper_bound(s.begin(),s.end(),x)-s.begin();
        return it;
    }

private:
    vector<int>s;
    int sum=0;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */