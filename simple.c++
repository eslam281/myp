#include <iostream>
#include <vector>
#include<algorithm>
std::vector<int> snail(const std::vector<std::vector<int>>& snail_map) {
    std::vector<int> result;
    if (snail_map.empty())return{ };
    for (int i = 0; i < snail_map.size(); i++) {
        for (int j = 0; j < snail_map.size(); j++) {
            result.push_back(snail_map[i][j]);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main()
{
    std::vector<std::vector<int>> v;
    std::vector<int> expected;
    v = { {} };
    expected = {};
   snail(v);
	return 0;	
}