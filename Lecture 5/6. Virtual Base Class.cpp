#include <iostream>
#include <conio.h>
using namespace std;
class ClassA
{
public:
    int a;
};

class ClassB : virtual public ClassA
{
public:
    int b;
};
class ClassC : public virtual ClassA
{
public:
    int c;
};

class ClassD : public ClassB, public ClassC
{
public:
    int d;
};

void main()
{

    ClassD obj;

    obj.a = 10;  //Statement 3
    obj.a = 100; //Statement 4

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "\n A : " << obj.a;
    cout << "\n B : " << obj.b;
    cout << "\n C : " << obj.c;
    cout << "\n D : " << obj.d;
}