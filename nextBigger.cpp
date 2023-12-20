#include <algorithm>
#include <string>
#include <iostream>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

long findNext(std::string number, int n)
{
    int i, j;
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
            break;


    if (i==0)
    {
        return -1;
    }

    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;

    swap(&number[smallest], &number[i-1]);

    std::sort(number.begin()+i, number.begin() + n);



    return std::stol(number);
}
long nextBigger(long n) {
    std::string a= std::to_string(n);

    return findNext(a,a.length());

}