#include <string>
#include <sstream>
std::string highAndLow(const std::string& numbers){
  
  std::istringstream ss(numbers);
    std::string ite;
    int min=NULL,max=NULL;
    while (ss >> ite){
        if(min==NULL || max==NULL) {
            min= stoi(ite);
            max=stoi(ite);
            continue;
        }
        min=min<stoi(ite)?min:stoi(ite);
        max=max>stoi(ite)?max:stoi(ite);
    }
    return std::to_string(max)+" "+std::to_string(min);

}
