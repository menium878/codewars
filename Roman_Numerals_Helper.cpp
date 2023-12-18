#include <string>
#include <map>
class RomanHelper{
private:
    std::map<int,std::string> smap = {{0,""},{1,"C"},{2,"CC"},{3,"CCC"},{4,"CD"},{5,"D"},{6,"DC"},{7,"DCC"},{8,"DCCC"},{9,"CM"}};
    std::map<int,std::string> dmap = {{0,""},{1,"X"},{2,"XX"},{3,"XXX"},{4,"XL"},{5,"L"},{6,"LX"},{7,"LXX"},{8,"LXXX"},{9,"XC"}};
    std::map<int,std::string> jmap = {{0,""},{1,"I"},{2,"II"},{3,"III"},{4,"IV"},{5,"V"},{6,"VI"},{7,"VII"},{8,"VIII"},{9,"IX"}};

    std::map<std::string,int> smap1 = {{"",0},{"C",1},{"CC",2},{"CCC",3},{"CD",4},{"D",5},{"DC",6},{"DCC",7},{"DCCC",8},{"CM",9}};
    std::map<std::string,int> dmap1 = {{"",0},{"X",1},{"XX",2},{"XXX",3},{"XL",4},{"L",5},{"LX",6},{"LXX",7},{"LXXX",8},{"XC",9}};
    std::map<std::string,int> jmap1 = {{"",0},{"I",1},{"II",2},{"III",3},{"IV",4},{"V",5},{"VI",6},{"VII",7},{"VIII",8},{"IX",9}};

public:
    std::string to_roman(unsigned int n){
        int t =n/1000;
        int s =(n/100)%10;
        int d = (n/10)%10;
        int j = n%10;
        std::string result ;
        for (int i = 0; i < t; ++i) result.push_back('M');
        return result+smap[s]+dmap[d]+jmap[j];
    }
    int from_roman(std::string rn){
        std::string temp;
        int t=0;
        std::string s;
        bool afterS= false;
        std::string d;
        bool afterD= false;
        std::string j;
        for(int i=0;i<rn.length();i++){
            if (rn[i]=='M' && temp.empty()) {
                t++;
                continue;
            }
            if((rn[i]=='L' || rn[i]=='X') && !afterS ) {
                s = temp;
                afterS=true;
                temp="";
            }
            if((rn[i]=='V' || rn[i]=='I') && !afterD) {
                if(!afterS && (rn[i-1]=='C' || rn[i-1]=='D'|| rn[i-1]=='M')) s=temp;
                else d = temp;
                afterD=true;
                afterS=true;
                temp="";
            }
            temp.push_back(rn[i]);
            if (i==rn.length()-1){
                if(!afterD) d=temp;
                else j=temp;
                break;
            }

        }

        return t*1000+ smap1[s]*100+dmap1[d]*10+jmap1[j];
    }
} RomanNumerals;