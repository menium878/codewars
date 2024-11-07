#include <string>

std::string decodeMorse(const std::string& morseCode) {
    std::string decoded;
    std::string k="";
    bool czy = false;
    for( auto& p : morseCode ) {
      if(p!=' ') {
        k+=p;
        czy = true;
        }
      if (!czy) continue;
      if(k=="" && p==' ') {
        if(decoded.back()==' ') czy =false;
        else{decoded+=" ";
        k=" ";}
        continue;
        }
      if(p==' ' || &p == &morseCode.back()){
      decoded += MORSE_CODE[k];
        k="";
        }
    }
    if(decoded.back()==' ') decoded.pop_back();
    return decoded;
}
