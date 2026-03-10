using namespace std;

int solution(int num1, int num2)
{
    int answer = (num1 == num2);
    if (answer == 0) answer = -1;
    return answer;
}