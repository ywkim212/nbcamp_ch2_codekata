using namespace std;

int solution(int n)
{
    int num = 0;
    int answer = 0;
    while (num <= n)
    {
        if (num % 2 == 0)
        {
            answer += num;
        }
        num++;
    }
    return answer;
}