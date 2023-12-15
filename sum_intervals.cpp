#include <vector>
#include <utility>
#include <algorithm>

int sum_intervals(std::vector<std::pair<int, int>> intervals) {
    int sum=0;
    std::sort(intervals.begin(),intervals.end());
    int temp=intervals[0].first;
    for (std::pair<int,int> ha:intervals){
        if(ha.second<temp) continue;
        if(ha.first>temp) temp=ha.first;
        sum+=ha.second-temp;
        temp=ha.second;
    }
    return sum;

}