#include <vector>
#include <algorithm>
#include <numeric>

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    std::vector<int> k;
    if(input.empty()) return k;
    k.push_back(std::count_if(input.begin(),input.end(),[](auto a){return a>0;}));
    k.push_back(std::accumulate(input.begin(),input.end(),0,[](auto a,auto b){return b<0?a+b:a;}));
    return k;
}