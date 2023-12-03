#include <iostream>
long int findNextSquare(long int sq) {
    bool is_sqrt;
    if (sq >= 0) {
        long long sr = sqrt(sq);
        is_sqrt= (sr * sr == sq);
    }
    return is_sqrt?(pow(sqrt(sq)+1,2)):-1;
}