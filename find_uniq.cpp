#include <vector>

float find_uniq(const std::vector<float> &v)
{
    for(int i=0;i<v.size();i++) {
        if(v[i]!=v[i+1]){
            if (v[i]!=v[i+2]){
                return v[i];
            }
            return v[i+1];
        }
    }

}