#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toUpperCase(string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        str[i] = std::toupper(str[i]);
    }
}

int main() {
    string input;
    cout << "문자열을 입력하시오 (끝내려면 q): ";
    while (getline(cin, input) && input != "q") {
        toUpperCase(input);
        cout << input << std::endl;
        cout << "다음 문자열을 입력하시오 (끝내려면 q): ";
    }
    cout << "끝" << endl;

    return 0;
}
