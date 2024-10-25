#include <cctype>
#include <iostream>
#include <string>


std::string to_camel_case(std::string text) {
    std::string a="";
    for(int i=0;i<text.length();i++){
        if(!isalpha(text[i])){
            i++;
            a+=toupper(text[i]);
            continue;
        }
        a+=text[i];
    }
    return a;
}
