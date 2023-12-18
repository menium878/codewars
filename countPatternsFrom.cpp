#include <iostream>
#include <vector>
#include <algorithm>

void removeChars(std::vector<char>& firstVector, const std::vector<char>& secondVector) {

    firstVector.erase(std::remove_if(firstVector.begin(), firstVector.end(),
                                     [&secondVector](char c) { return std::find(secondVector.begin(), secondVector.end(), c) != secondVector.end(); }),
                      firstVector.end());
    sort( firstVector.begin(), firstVector.end() );
    firstVector.erase( unique( firstVector.begin(), firstVector.end() ), firstVector.end() );
}
//std::vector<char> lol={'A','B','C','D','E','F','G','H','I'}; // need to take into consideration what I used already and what I want to take for the loop can't be global I know
unsigned int countPatternsFrom1(char firstDot, unsigned short length, std::vector<char> used) {
    if (length < 2) return length;
    if (length > 9) return 0;
    used.push_back(firstDot);
    int ile;
    std::vector<char> ha;
    switch (firstDot){
        case 'B':
            ha={'A','C','D','E','F','G','I'};
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('H');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'D':
            ha={'A','B','C','E','G','H','I'};
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('F');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'F':
            ha={'A','B','C','E','G','H','I'};
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('D');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'H':
            ha={'A','C','D','E','F','G','I'};
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('B');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'A':
            ha={'B','D','E','F','H'};
            if(std::find(used.begin(), used.end(),'D')!=std::end(used)) ha.push_back('G');
            if(std::find(used.begin(), used.end(),'B')!=std::end(used)) ha.push_back('C');
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('I');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'C':
            ha={'B','D','E','F','H'};
            if(std::find(used.begin(), used.end(),'F')!=std::end(used)) ha.push_back('I');
            if(std::find(used.begin(), used.end(),'B')!=std::end(used)) ha.push_back('A');
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('G');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'G':
            ha={'B','D','E','F','H'};
            if(std::find(used.begin(), used.end(),'D')!=std::end(used)) ha.push_back('A');
            if(std::find(used.begin(), used.end(),'H')!=std::end(used)) ha.push_back('I');
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('C');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'I':
            ha={'B','D','E','F','H'};
            if(std::find(used.begin(), used.end(),'F')!=std::end(used)) ha.push_back('C');
            if(std::find(used.begin(), used.end(),'H')!=std::end(used)) ha.push_back('G');
            if(std::find(used.begin(), used.end(),'E')!=std::end(used)) ha.push_back('A');
            removeChars(ha,used);
            ile=ha.size();
            break;
        case 'E':
            ha={'A','B','C','D','E','F','G','H','I'};
            removeChars(ha,used);
            ile=ha.size();
            break;
    }
    //! Remove the possiblities from the vector
    //? Mayby keeping trac of the used once would be better
    if (length==2) return ile;
    length--;
    for (char k: ha) {
        ile += countPatternsFrom1(k, length, used)-1;
    }
    return ile;
}
unsigned int countPatternsFrom(char firstDot, unsigned short length){
    return countPatternsFrom1(firstDot,length,std::vector<char>());

}
int main() {
    std::cout << countPatternsFrom('E', 4);
    return 0;
}