#include <iostream>
using namespace std;
class over
{
    float x, y;

public:
    over(float a = 0.0, float b = 0.0)
    {
        x = a;
        y = b;
    }
    friend over operator+(over ob1, over ob2);
    void display()
    {
        cout << "Value : " << x << " + " << y << "i"
             << "\n";
    }
};
over operator+(over ob1, over ob2)
{
    over tem;
    tem.x = ob1.x + ob2.x;
    tem.y = ob1.y + ob2.y;
    return tem;
}
int main()
{
    float x1, y1, x2, y2;
    cout << "Enter real and imaginary part of first number : ";
    cin >> x1 >> y1;
    cout << "Enter real and imaginary part of second number : ";
    cin >> x2 >> y2;
    over ob1(x1, y1);
    over ob2(x2, y2);
    over ob3;
    cout << "\nOriginal Complex Numbers"
         << "\n";
    ob1.display();
    ob2.display();
    cout << "\nAfter Addition"
         << "\n";
    ob3 = ob1 + ob2;
    ob3.display();
    return 0;
}