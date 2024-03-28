#include <vector>
#include <string>
#include <utility>

std::string find_routes (const std::vector<std::pair<std::string, std::string>> &routes) {
    std::pair<std::string, std::string> starting;
    for(auto k:routes){
        auto c = std::find_if(routes.begin(),routes.end(),[k](std::pair<std::string, std::string> a){return a.second==k.first;});
        if(c==routes.end()) {
            starting=k;
            break;
        }
    }
    std::string ret=starting.first+", ";
    auto start=starting.second;

    for(;;){
        ret+=start;
        auto k = std::find_if(routes.begin(),routes.end(),[&start](std::pair<std::string, std::string> a){return a.first==start;});
        if(k==routes.end()) break;
        auto h= *k;
        ret+=+", ";
        start=h.second;
    }
    return ret;
}
