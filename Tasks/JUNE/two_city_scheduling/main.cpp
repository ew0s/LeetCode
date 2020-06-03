#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int twoCitySchedCost(vector<vector<int> >& costs)
    {
        vector <std::pair <int, int>> diff;
        for (int i = 0; i< costs.size(); i++)
            diff.push_back(std::make_pair(costs[i][0] - costs[i][1], i));

        std::sort (diff.begin(), diff.end());

        int total_cost = 0;
        int i = 0;

        for (i = 0; i < costs.size() / 2; i++)
            total_cost += costs[diff[i].second][0];

        for (i = costs.size() / 2; i < costs.size(); i++)
            total_cost += costs[diff[i].second][1];

        return total_cost;
    }
};


int main()
{
    Solution some;

    vector <vector <int> > arr = {{259, 770}, {448, 54}, {926, 667}, {184, 139}, {840, 118}, {577, 469}};
    std::cout << some.twoCitySchedCost(arr);
}