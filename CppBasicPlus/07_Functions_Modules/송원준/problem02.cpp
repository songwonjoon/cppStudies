#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void inputScores(vector<int>& scores)
{
    cout << "골프 점수를 최대 10개까지 입력하세요. (음수 입력시 종료) " << endl;

    for (int i = 0; i < 10; i++)
    {
        int score;
        cout << "#점수 " << (i+1) << ": ";
        cin >> score;

        if (score < 0) {
            break;
        }

        scores.push_back(score);
    }
}

double scoresMean(vector<int> scores)
{
    if (scores.empty())
    {
        return 0.0;
    }

    double sum = accumulate(scores.begin(), scores.end(), 0.0);
    return sum / scores.size(); 
}

void printScores(vector<int> scores, double avg)
{
    cout << "입력된 점수 목록:" << endl;

    for (size_t i = 0; i < scores.size(); i++)
    {
        cout << "점수 #" << (i + 1) << ": " << scores[i] << endl;
    }

    cout << "평균 점수: " << avg << endl;
}

int main()
{
    vector<int> scores;

    inputScores(scores);

    double avg = scoresMean(scores);
    printScores(scores, avg);
}