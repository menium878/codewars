#include <vector>


std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::vector<int> vecret;
    for (int cos:arr){
        if(std::count(vecret.begin(), vecret.end(), cos) < n) {
            vecret.push_back(cos);
        }
    }
    return vecret;
}