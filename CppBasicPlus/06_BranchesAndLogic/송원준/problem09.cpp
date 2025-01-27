#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Donor {
    string name;
    double amount;
};

int main() {
    string filename;
    cout << "기부자 데이터를 포함한 파일 이름을 입력하세요: ";
    cin >> filename;

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "파일을 열 수 없습니다: " << filename << endl;
        return 1;
    }

    int numDonors;
    inputFile >> numDonors;
    inputFile.ignore();

    vector<Donor> donors(numDonors);

    for (int i = 0; i < numDonors; ++i) {
        getline(inputFile, donors[i].name);
        inputFile >> donors[i].amount;
        inputFile.ignore();
    }

    inputFile.close();

    cout << "\n고액 기부자:\n";
    bool hasHighDonors = false;
    for (const auto& donor : donors) {
        if (donor.amount >= 10000) {
            cout << donor.name << ": $" << donor.amount << endl;
            hasHighDonors = true;
        }
    }
    if (!hasHighDonors) {
        cout << "고액 기부자가 없습니다." << endl;
    }

    cout << "소액 기부자:\n";
    bool hasLowDonors = false;
    for (const auto& donor : donors) {
        if (donor.amount < 10000) {
            cout << donor.name << ": $" << donor.amount << endl;
            hasLowDonors = true;
        }
    }
    if (!hasLowDonors) {
        cout << "소액 기부자가 없습니다." << endl;
    }

    return 0;
}