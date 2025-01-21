#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char word[20];
    int wordCount = 0;

    cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력 ) :" << endl;
    while (true) {
        cin >> word;

        if (strcmp(word, "done") == 0) {
            break;
        }

        wordCount++;
    }
    
    cout << "총 " << wordCount << "단어가 입력되었습니다." << endl;

    return 0;
}