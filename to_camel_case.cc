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

/*Testing
Describe(Testing_function_to_camel_case)
{
    It(Basic_tests)
    {
        Assert::That(to_camel_case(""), Equals(""));
        Assert::That(to_camel_case("the_stealth_warrior"), Equals("theStealthWarrior"));
        Assert::That(to_camel_case("The-Stealth-Warrior"), Equals("TheStealthWarrior"));
        Assert::That(to_camel_case("A-B-C"), Equals("ABC"));
    }
};
*/
