#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> k;
    k=input;
    k.erase(std::remove_if(k.begin(), k.end(), [](const auto &item) {
        return item==0;
    }),k.end());
    int s=input.size()-k.size();
    for(int i=0;i<s;i++){
        k.emplace_back(0);
    }
    return k;
}


auto move_zeroes(std::vector<int> v) {
    stable_partition(begin(v), end(v), std::negate()); // if false then go to end and 0 have not negation
    return v;
}