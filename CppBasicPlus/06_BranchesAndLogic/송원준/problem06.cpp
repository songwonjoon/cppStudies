#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Donor {
    string name;
    double amount;
};

int main() {
    int numDonors;
    cout << "기부할 사람의 수를 입력하세요: ";
    cin >> numDonors;

    if (numDonors <= 0) {
        cout << "유효한 기부자 수를 입력해야 합니다." << std::endl;
        return 1;
    }

    std::vector<Donor> donors(numDonors);

    for (int i = 0; i < numDonors; ++i) {
        cout << i + 1 << "번째 기부자의 이름을 입력하세요: ";
        cin.ignore();
        getline(std::cin, donors[i].name);

        cout << i + 1 << "번째 기부자의 기부금을 입력하세요: ";
        cin >> donors[i].amount;

        if (donors[i].amount < 0) {
            cout << "기부금은 음수가 될 수 없습니다. 다시 입력하세요." << std::endl;
            --i;
        }
    }

    cout << "\n고액 기부자:\n";
    bool hasHighDonors = false;
    for (const auto& donor : donors) {
        if (donor.amount >= 10000) {
            cout << donor.name << ": $" << donor.amount << std::endl;
            hasHighDonors = true;
        }
    }
    if (!hasHighDonors) {
        cout << "고액 기부자가 없습니다." << std::endl;
    }

    cout << "\n소액 기부자:\n";
    bool hasLowDonors = false;
    for (const auto& donor : donors) {
        if (donor.amount < 10000) {
            cout << donor.name << ": $" << donor.amount << std::endl;
            hasLowDonors = true;
        }
    }
    if (!hasLowDonors) {
        cout << "소액 기부자가 없습니다." << std::endl;
    }

    return 0;
}
