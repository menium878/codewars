#include <vector>
#include <numeric>

int maxSequence(const std::vector<int> &arr) {
    int highest = 0;
    for (int j = 0; j < arr.size(); j++) {
        for (int i = 0; i+j < arr.size(); i++) {
            int oblicz=std::accumulate(arr.begin() + i, arr.end() - j, 0);
            highest = highest < oblicz?oblicz:highest;
        }
    }
    return highest;
}