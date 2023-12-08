#include <string>

std::string decToHexa(int n)
{
    std::string ans = "";
    if(n<0) return "00";
    if(n>255) return "FF";
    while (n != 0) {
        int rem = 0;
        char ch;
        rem = n % 16;
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
        ans += ch;
        n = n / 16;
    }
    int i = 0, j = ans.size() - 1;
    while(i <= j)
    {
        std::swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans.size()==2?ans:ans.size()+1==2?"0"+ans:"00";
}
std::string rgb_to_hex(int r, int g, int b)
{
    return decToHexa(r)+decToHexa(g)+decToHexa(b);
}