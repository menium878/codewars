#include <numeric>
#include <vector>
int solution(int number) 
{
if (number<=0)return 0; 
    std::vector<int> vec(number);
    iota(vec.begin()+1, vec.end(), 1);
    return std::accumulate(vec.begin(),vec.end(),0,[](int a,int b){return b%5==0||b%3==0?a+b:a;});
}
