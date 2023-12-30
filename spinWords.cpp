#include <sstream>
#include <string>
std::string spinWords(const std::string &str)
{
    std::string result;
    std::string ha=str;
    std::stringstream ss(ha);
    while(std::getline(ss,ha,' ')){
        if(ha.length()>4) std::reverse(ha.begin(), ha.end());
        result+=ha;
        result+=" ";
    }
    if(!result.empty())result.pop_back();
    return result;
}