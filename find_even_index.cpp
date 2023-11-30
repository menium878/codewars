#include <vector>
#include <numeric>


int find_even_index (const std::vector <int> numbers) {
    for (int index = 0; index < numbers.size(); index++)
    {
        int left_sum = std::accumulate(numbers.begin(), numbers.begin() + index, 0);
        int right_sum = std::accumulate(numbers.begin() + index + 1, numbers.end(), 0);
        if (left_sum == right_sum)
            return index;
    }
    return -1;
}

int main() {



    find_even_index({ 20,10,-80,10,10,15,35 });
    return 0;

}
