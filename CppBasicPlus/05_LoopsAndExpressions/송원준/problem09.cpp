#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    int wordCount = 0;

    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력 ) :" << endl;
    while (true) {
        cin >> word;

        if (word == "done") {
            break;
        }

        wordCount++;
    }
    
    cout << "총 " << wordCount << "단어가 입력되었습니다." << endl;

    return 0;
}