#include <string>

std::string expandedForm(unsigned long long n) {
    std::string s=std::to_string(n);
    std::reverse(s.begin(), s.end());
    int i=0;
    std::string final;
    for(char ha:s){
        if (ha=='0') {
            i++;
            continue;
        }
        for(int k=0 ;k<i;k++){
            final.insert(final.begin(),'0');
        }
        final.insert(final.begin(),ha);

        if(s.length()-1!=i) {
            final.insert(final.begin(),' ');
            final.insert(final.begin(),'+');
            final.insert(final.begin(),' ');
        }
        i++;
    }
    return final;
}