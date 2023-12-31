#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
std::vector<std::string> even_or_odd(std::vector<int> number)
{
    std::vector<std::string> a;
    std::transform(number.begin(), number.end(),std::back_inserter(a),[](int b){return b%2==0?"Even":"Odd";});
    return a;
}