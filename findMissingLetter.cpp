char findMissingLetter(const std::vector<char>& chars)
{
    for(int i=0;i<chars.size();i++){
        if(int(chars[i]) + 1 != int(chars[i + 1]))
            return char(int(chars[i]) + 1);
    }
}