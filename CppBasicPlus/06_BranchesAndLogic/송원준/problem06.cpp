#include <iostream>
#include <vector>
#include <string>

struct Donor {
    std::string name;
    double amount;
};

int main() {
    int numDonors;
    std::cout << "기부할 사람의 수를 입력하세요: ";
    std::cin >> numDonors;

    if (numDonors <= 0) {
        std::cout << "유효한 기부자 수를 입력해야 합니다." << std::endl;
        return 1;
    }

    std::vector<Donor> donors(numDonors);

    for (int i = 0; i < numDonors; ++i) {
        std::cout << i + 1 << "번째 기부자의 이름을 입력하세요: ";
        std::cin.ignore(); // 이전 입력의 개행 문자 제거
        std::getline(std::cin, donors[i].name);

        std::cout << i + 1 << "번째 기부자의 기부금을 입력하세요: ";
        std::cin >> donors[i].amount;

        if (donors[i].amount < 0) {
            std::cout << "기부금은 음수가 될 수 없습니다. 다시 입력하세요." << std::endl;
            --i;
        }
    }

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
