#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string word;
    int vowels = 0, consonants = 0, others = 0;

    cout << "단어들을 입력하십시오 (끝내려면 q): " << std::endl;

    while (true) {
        cin >> word;

        if (word == "q") {
            break;
        }

        char firstChar = word[0];

        if (std::isalpha(firstChar)) {
            firstChar = tolower(firstChar);
            if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        } else {
            ++others;
        }
    }

    cout << "모음으로 시작하는 단어 수: " << vowels << endl;
    cout << "자음으로 시작하는 단어 수: " << consonants << endl;
    cout << "기타: " << others << endl;

    return 0;
}
