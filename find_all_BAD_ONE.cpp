#include <cstdint>
#include <optional>
#include <tuple>
#include <cstdint>
#include <optional>
#include <tuple>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <string>

using out_t = std::tuple<std::uint32_t, std::uint64_t, std::uint64_t>;
bool myfunction (int i,int j) { return (i<j); }
std::optional<out_t> find_all(std::uint32_t digit_sum, std::uint32_t digit_count) {

    std::vector<int> numbers;
    for (int i = std::pow(10, digit_count - 1); i < pow(10, digit_count);i++) {
        int sum=0;
        bool hasZero = false;
        int temp = i;
        int digit=9;
        while (temp) {
            if(digit<temp%10) {
                hasZero = true;
                break;
            }
            digit = temp % 10;

            if (digit == 0) {
                hasZero = true;
                break;
            }
            sum+=digit;
            if(sum>digit_sum) break;
            temp = temp / 10;
        }
        //if (std::count(digits.begin(), digits.end(), 0) > 0) continue;
        //std::vector<int> dig;
        //dig=digits;
        //std::sort(dig.begin(),dig.end(),myfunction);
        if (!hasZero &&sum == digit_sum)
            numbers.push_back(i);

    }


    if (numbers.empty()) return std::nullopt;
    return std::tuple{numbers.size(), numbers.front(),numbers.back()};
}

// too long calculation