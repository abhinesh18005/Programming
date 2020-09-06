// Pointers to Object and Arrow Operator
#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).setData(1, 54); //use of bracket is must in (*ptr) bcoz dot(.) operater has higher precedence than *operator
    ptr->setData(1, 54); // same as above statement (by using arrow operator)

    // (*ptr).getData();
    ptr->getData(); //(usng arrow (->) operator)


    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr->setData(1, 4);
    ptr->getData();
    return 0;
}