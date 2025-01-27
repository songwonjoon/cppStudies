#include <iostream>

using namespace std;

int main()
{
    char input;
    cout << "다음 선택 사항 중에서 하나를 선택하십시오 ." << endl;
    cout << "c) camera p) pianist \nt) tree g) game" << endl;

    while (true)
    {
        cin >> input;

        if (input == 'q') {
            break;
        }

        switch (input)
        {
            case 'c':
                cout << "카메라로 사진을 찍습니다." << endl;
                break;
            case 'p':
                cout << "피아니스트가 피아노 연주릅 합니다." << endl;
                break;
            case 't':
                cout << "단풍나무는 잎이 별처럼 생겼습니다." << endl;
                break;
            case 'g':
                cout << "친구와 게임을 합니다." << endl;
                break;
            default:
                cout << "c, p, t , g 중에서 하나를 선택하십시오." << endl;
                break;
        }
    }
    

    return 0;
}