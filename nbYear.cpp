class Arge
{
public:
    static int nbYear(int p0, double percent, int aug, int p);

};

int Arge::nbYear(int p0, double percent, int aug, int p) {
    int count=0;
    while(p0<p){
        p0+= p0 * (percent / 100) + aug;
        count++;
    }

    return count;
}


/*
class Arge
{
public:
    static int nbYear(int p0, double percent, int aug, int p);
};

int Arge::nbYear(int p0, double percent, int aug, int p)
{
    return p > p0 ? 1 + nbYear(p0 * (1 + percent / 100) + aug, percent, aug, p) : 0;
}
*/
