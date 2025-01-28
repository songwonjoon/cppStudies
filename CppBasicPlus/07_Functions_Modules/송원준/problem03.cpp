#include <iostream>
#include <cstring> // for strcpy

using namespace std;

// 구조체 선언
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void printBox(box b) {
    cout << "Maker: " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}

void calculateVolume(box* b) {
    b->volume = b->height * b->width * b->length;
}

int main() {
    box myBox;

    strcpy(myBox.maker, "ExampleMaker");
    myBox.height = 5.0f;
    myBox.width = 3.0f;
    myBox.length = 2.0f;
    myBox.volume = 0.0f;

    cout << "Before calculating volume:" << endl;
    printBox(myBox);

    calculateVolume(&myBox);

    cout << "\nAfter calculating volume:" << endl;
    printBox(myBox);

    return 0;
}
