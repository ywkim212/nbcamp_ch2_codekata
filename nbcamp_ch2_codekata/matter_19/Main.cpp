#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n)
{
    long long sqrtN = sqrt(n);
    if (sqrtN * sqrtN == n)
        return pow(sqrtN + 1, 2);
    else
        return -1;
}