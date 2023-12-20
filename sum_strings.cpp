#include <string>
#include <iostream>
std::string sum_strings(const std::string& a, const std::string& b) {
    std::string arev=a.length()>b.length()?a:b;
    std::reverse(arev.begin(), arev.end());
    std::string brev=a.length()>b.length()?b:a;
    std::reverse(brev.begin(), brev.end());
    int len = brev.length()-1;

    int i=0;
    int k=0;
    int temp=0;
    char oblicz;
    while(true){
        oblicz=len>=i?((arev[i]-'0')+(brev[i]-'0')+temp)+'0':((arev[i]-'0')+temp)+'0';
        //oblicz=((arev[i]-'0')+(brev[i]-'0')+temp)+'0';
        if(oblicz>57){
            k=(oblicz-'0')%10;
            arev[i]=k+'0';
            temp=1;

        }
        else{
            arev[i]=oblicz;
            temp=0;

        }
        i++;
        if(len<i && arev.length()==i) {
            if (temp==1)

                arev.push_back(temp+'0');
            break;
        }
    }
    std::reverse(arev.begin(), arev.end());
    return arev;

}