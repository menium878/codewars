#include <string>
std::string duplicate_encoder(const std::string& word){
    std::string words;
    std::string woord=word;
    std::transform(woord.begin(), woord.end(), woord.begin(), ::tolower);
    for (int i = 0; i < woord.length(); i++) {
        if ((woord.find_first_of(woord[i]) != i) || (woord.find_last_of(woord[i]) != i)) {
            words.push_back(')');
        } else{
            words.push_back('(');
        }
    }
    return words;
}