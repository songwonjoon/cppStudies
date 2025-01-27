#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Donor {
    std::string name;
    double amount;
};

int main() {
    std::string filename;
    std::cout << "기부자 데이터를 포함한 파일 이름을 입력하세요: ";
    std::cin >> filename;

    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "파일을 열 수 없습니다: " << filename << std::endl;
        return 1;
    }

    int numDonors;
    inputFile >> numDonors;
    inputFile.ignore();

    std::vector<Donor> donors(numDonors);

    for (int i = 0; i < numDonors; ++i) {
        std::getline(inputFile, donors[i].name);
        inputFile >> donors[i].amount;
        inputFile.ignore();
    }

    inputFile.close();

    std::cout << "\n고액 기부자:\n";
    bool hasHighDonors = false;
    for (const auto& donor : donors) {
        if (donor.amount >= 10000) {
            std::cout << donor.name << ": $" << donor.amount << std::endl;
            hasHighDonors = true;
        }
    }
    if (!hasHighDonors) {
        std::cout << "고액 기부자가 없습니다." << std::endl;
    }

    std::cout << "\n소액 기부자:\n";
    bool hasLowDonors = false;
    for (const auto& donor : donors) {
        if (donor.amount < 10000) {
            std::cout << donor.name << ": $" << donor.amount << std::endl;
            hasLowDonors = true;
        }
    }
    if (!hasLowDonors) {
        std::cout << "소액 기부자가 없습니다." << std::endl;
    }

    return 0;
}