#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string word;
    int vowels = 0, consonants = 0, others = 0;

    std::cout << "단어들을 입력하십시오 (끝내려면 q): " << std::endl;

    while (true) {
        std::cin >> word;

        if (word == "q") {
            break;
        }

        char firstChar = word[0];

        if (std::isalpha(firstChar)) {
            firstChar = std::tolower(firstChar);
            if (firstChar == 'a' || firstChar == 'e' || firstChar == 'i' || firstChar == 'o' || firstChar == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        } else {
            ++others;
        }
    }

    std::cout << "모음으로 시작하는 단어 수: " << vowels << std::endl;
    std::cout << "자음으로 시작하는 단어 수: " << consonants << std::endl;
    std::cout << "기타: " << others << std::endl;

    return 0;
}
