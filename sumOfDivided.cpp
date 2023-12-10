#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

class SumOfDivided
{
private:
    static std::vector<int> primeFactorsprimeFactors(int n);
public:
    static std::string sumOfDivided(std::vector<int> &lst);
};

std::string SumOfDivided::sumOfDivided(std::vector<int> &lst) {
    std::unordered_map <int,int>mojmap;
    std::vector<int>temp;
    for(int a:lst){
        temp=primeFactorsprimeFactors(a);
        for(int cos:temp){
            mojmap[cos]+=a;
        }
    }
    std::string returning;
    for(auto ha :mojmap)
        returning+="("+std::to_string(ha.first)+" "+std::to_string(ha.second)+")";
    return returning;
}

std::vector<int> SumOfDivided::primeFactorsprimeFactors(int n) {
    n=std::abs(n);
    std::vector<int> k;
    while (n % 2 == 0)
    {
        k.push_back(2);
        n = n/2;
    }

    for (int i = 3; i <= std::sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            k.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        k.push_back(n);
    std::sort( k.begin(), k.end() );
    k.erase( unique( k.begin(), k.end() ), k.end() );
    return k;
}

int main()
{
    std::vector<int> d1 = {15, 30, -45};
    std::cout<<SumOfDivided::sumOfDivided(d1);
    return 0;
}