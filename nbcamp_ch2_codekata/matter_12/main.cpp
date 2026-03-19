#include <vector>

using namespace std;

double solution(vector<int> numbers)
{
    int size = numbers.size();
    double answer = 0;
    for (int i = 0; i < size; i++)
    {
        answer += numbers[i];
    }
    answer /= size;
    return answer;
}