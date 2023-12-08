#include <string>
std::string incrementString(const std::string &str)
{
    std::string rev=str;
    std::reverse(rev.begin(), rev.end());
    std::string numberrev;
    int co=0;
    for (char s:rev){
        if(isdigit(s)) co++;
        else break;
    }
    if(co==0)return str+"1";
    const std::string& final=str;
    numberrev=std::to_string(stoi(final.substr(final.size()-co,co))+1);
    while(numberrev.size()<co){
        numberrev="0"+numberrev;
    }
    return final.substr(0,final.size()-co)+numberrev;
}