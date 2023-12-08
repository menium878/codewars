#include <string>
std::size_t duplicateCount(const std::string& word){
    std::string words;
    std::string woord=word;
    std::vector <char> used;
    int count=0;
    std::transform(woord.begin(), woord.end(), woord.begin(), ::tolower);
    for (int i = 0; i < woord.length(); i++) {
        if ((woord.find_first_of(woord[i]) != i) || (woord.find_last_of(woord[i]) != i)) {
            if (!( std::find(used.begin(), used.end(), woord[i]) != used.end() )) {
                used.push_back(woord[i]);
                count++;
            }
        }
    }
    return count;
}