#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

struct comparator
{
    bool operator()(std::vector<int> const& a, std::vector<int> const& b) const
    {
        // lowest to the top
        return a[0] > b[0];
    }
};

using my_priority_queue = priority_queue<vector<int>, vector<vector<int>>, comparator>;
