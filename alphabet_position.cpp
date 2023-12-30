#include <string>

std::string alphabet_position(const std::string &text) {
    std::string k;
    for (auto ha : text){
        if(tolower(ha)>96 && tolower(ha)<122) {
            k+=std::to_string((tolower(ha) - 96));
            k+=" ";
        }
    }
    if(k.length()>0) k.pop_back();
    return k;
}