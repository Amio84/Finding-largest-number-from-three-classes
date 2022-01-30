#include <iostream>
using namespace std;
class Class_Three;
class Class_Two;
class Class_One
{
public:
    Class_One();
    Class_One(int n);
    void set_data(int value);
    friend void find_greatest_number(Class_One, Class_Two, Class_Three);
    ~Class_One();

private:
    int Number1;
};

Class_One::Class_One()
{
    Number1 = 0;
}

Class_One::Class_One(int n)
{
    Number1 = n;
}

void Class_One::set_data(int value)
{
    Number1 = value;
}

Class_One::~Class_One()
{
}

class Class_Two
{
public:
    Class_Two();
    Class_Two(int n);
    void set_data(int value);
    friend void find_greatest_number(Class_One, Class_Two, Class_Three);
    ~Class_Two();

private:
    int Number2;
};

Class_Two::Class_Two()
{
    Number2 = 0;
}

Class_Two::Class_Two(int n)
{
    Number2 = n;
}

void Class_Two::set_data(int value)
{
    Number2 = value;
}

Class_Two::~Class_Two()
{
}

class Class_Three
{
public:
    Class_Three();
    Class_Three(int n);
    void set_data(int value);
    friend void find_greatest_number(Class_One, Class_Two, Class_Three);
    ~Class_Three();

private:
    int Number3;
};

Class_Three::Class_Three()
{
    Number3 = 0;
}

Class_Three::Class_Three(int n)
{
    Number3 = n;
}

void Class_Three::set_data(int value)
{
    Number3 = value;
}

Class_Three::~Class_Three()
{
}

void find_greatest_number(Class_One obj1, Class_Two obj2, Class_Three obj3)
{
    if (obj1.Number1 > obj2.Number2 && obj1.Number1 > obj3.Number3)
    {
        cout << "Greatest number is " << obj1.Number1 << endl;
    }
    else if (obj2.Number2 > obj1.Number1 && obj2.Number2 > obj3.Number3)
    {
        cout << "Greatest number is " << obj2.Number2 << endl;
    }
    else
    {
        cout << "Greatest number is " << obj3.Number3 << endl;
    }
}

int main()
{
    Class_One n1;
    Class_Two n2;
    Class_Three n3;
    int num1;
    int num2;
    int num3;

    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Enter another number: ";
    cin >> num3;

    n1.set_data(num1);
    n2.set_data(num2);
    n3.set_data(num3);
    find_greatest_number(n1, n2, n3);

    return 0;
}