unsigned int countBits(unsigned long long n){
    int count=0;
    for (int i = 63; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            count++;
    }
    return count;
}