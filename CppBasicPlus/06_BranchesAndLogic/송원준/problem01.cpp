#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    char alphabet;
    string sentence = "";

    while (alphabet != '@')
    {
        cout << "문자를 입력하시오: ";
        cin >> alphabet;

        if (!isdigit(alphabet))
        {
            if (islower(alphabet)) {
                sentence += toupper(alphabet);
            } else if (isupper(alphabet)) {
                sentence += tolower(alphabet);
            }
        }
    }

    cout << sentence << endl;

    return 0;
}