#include <string>
#include <iomanip>
#include <sstream>

std::string rgb_to_hex(int r, int g, int b)
{
    r=r<0?0:r>255?255:r;
    g=g<0?0:g>255?255:g;
    b=b<0?0:b>255?255:b;
    std::stringstream stream,stream1,stream2;
    stream<<std::setw(2)<< std::setfill('0')<< std::uppercase<<std::hex<<r;
    stream1<<std::setw(2)<< std::setfill('0')<< std::uppercase<<std::hex<<g;
    stream2<<std::setw(2)<< std::setfill('0')<< std::uppercase<<std::hex<<b;
    return stream.str() + stream1.str()+ stream2.str();

}
