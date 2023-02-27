#include <iostream>

using namespace std;

class Rectangle {
public:
    double length;
    double width;
    void getInformation()
    {
        cout << "Enter the length of Rectangle: ";
        cin >> length;
        cout << "Enter the width of Rectangle: ";
        cin >> width;
    }
    double getArea()
    {
        return length * width;
    }
    double getPerimeter()
    {
        return 2 * (width + length);
    }
    void display()
    {
        cout << "\nArea: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}