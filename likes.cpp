#include <string>
#include <vector>
#include <numeric>


std::string likes(const std::vector<std::string> &names)
{
    std::vector<std::string> nal =names;
    if (names.empty())return "no one likes this";
    switch (names.size()){
        case 1:
            return names[0]+" likes this";
        case 2:
        cos2:
            return accumulate(nal.begin() + 1, nal.end(),
                              (nal[0]),
                              [](const std::string& a, const std::string& b){
                                  return a + " and " + (b);
                              })+" like this";
        case 3:
            nal[0]=accumulate(nal.begin() + 1, nal.end()-1,
                              (nal[0]),
                              [](const std::string& a, const std::string& b){
                                  return a + ", " + (b);
                              });
            nal[1]=nal[2];
            nal.pop_back();
            goto cos2;
        default:
            return accumulate(nal.begin() + 1, nal.end()-nal.size()+2,
                              (nal[0]),
                              [](const std::string& a, const std::string& b){
                                  return a + ", " + (b);
                              })+" and "+ std::to_string(nal.size()-2) +" others like this";
    }

}