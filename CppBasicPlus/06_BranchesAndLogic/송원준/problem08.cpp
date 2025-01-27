#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string filename;
    cout << "문자를 세고 싶은 파일의 이름을 입력하세요: ";
    cin >> filename;

    ifstream inputFile(filename, ios::in);

    if (!inputFile) {
        cerr << "파일을 열 수 없습니다: " << filename << endl;
        return 1;
    }

    char ch;
    int charCount = 0;

    while (inputFile.get(ch)) {
        ++charCount;
    }

    inputFile.close();

    cout << "파일에 들어 있는 문자 수: " << charCount << endl;

    return 0;
}
