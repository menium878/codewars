#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
std::string highestandloowest(std::string input){
    std::istringstream stream(input);
    std::string token;
    std::vector<int> arr;
    while (std::getline(stream,token,' ')){
        arr.emplace_back(std::stoi(token));
    }
    std::sort(arr.begin(),arr.end());
    return std::to_string(arr.back())+std::to_string(arr.front());
}


int main(){
    highestandloowest("1 2 3");
}
