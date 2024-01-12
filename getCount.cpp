#include <string>
#include <algorithm>


int getCount(const std::string& inputStr){
    return std::count_if(inputStr.begin(), inputStr.end(),[](char a){return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';});
}