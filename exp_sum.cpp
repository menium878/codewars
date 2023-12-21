using ull = unsigned long long;

ull exp_sum(unsigned int n) {

    std::vector<ull> many(n+1, 0);
    many[0] = 1;
    for(unsigned int i = 1; i <= n; i++){
        for(unsigned int j = i; j <= n; j++){
            many[j] += many[j - i];
        }
    }
    return many[n];
}