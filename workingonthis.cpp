#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

std::vector<char> lol={'A','B','C','D','E','F','G','H','I'}; // need to take into consideration what I used already and what I want to take for the loop can't be global I know
unsigned int countPatternsFrom(char firstDot, unsigned short length) {
    if (length < 2) return length;
    if (length > 9) return 0;
    int ile;
    switch (firstDot){
        case 'B':
            ile=7;
            break;
        case 'D':
            ile=7;
            break;
        case 'F':
            ile=7;
            break;
        case 'H':
            ile=7;
            break;
        case 'A':
            ile=5;
            break;
        case 'C':
            ile=5;
            break;
        case 'G':
            ile=5;
            break;
        case 'I':
            ile=5;
            break;
        case 'E':
            ile=8;
            break;
    }
    //! Remove the possiblities from the vector
    //? Mayby keeping trac of the used once would be better
    //std::remove(lol.begin(), lol.end(),firstDot);
    if (length==2) return ile;
    length--;
    for (char k: lol) {
        ile += countPatternsFrom(k, length);
    }
    return ile;
}

int main() {
    std::cout << countPatternsFrom('D', 3);
    return 0;
}