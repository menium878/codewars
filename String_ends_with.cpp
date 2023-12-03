#include <string>
bool solution(std::string const &str, std::string const &ending) {
    if(str.length()<ending.length())return false;
    return str.substr(str.length()-ending.length())==ending || ending=="";
}
