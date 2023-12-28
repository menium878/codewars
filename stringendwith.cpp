#include <string>
bool solution(std::string const &str, std::string const &ending) {
    return str.length() >= ending.length() && str.substr(str.length() - ending.length(), ending.length()) == ending;
}