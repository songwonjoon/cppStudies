#include <iostream>
#include <fstream>

int main() {
    std::string filename;
    std::cout << "문자를 세고 싶은 파일의 이름을 입력하세요: ";
    std::cin >> filename;

    std::ifstream inputFile(filename, std::ios::in);

    if (!inputFile) {
        std::cerr << "파일을 열 수 없습니다: " << filename << std::endl;
        return 1;
    }

    char ch;
    int charCount = 0;

    while (inputFile.get(ch)) {
        ++charCount;
    }

    inputFile.close();

    std::cout << "파일에 들어 있는 문자 수: " << charCount << std::endl;

    return 0;
}
