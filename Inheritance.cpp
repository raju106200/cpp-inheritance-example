
#include <iostream>
using namespace std;

// Parent Class
class Father
{
public:
    void showFather()
    {
        cout << "This is Father class." << endl;
    }
};

// Child Class
class Son : public Father
{
public:
    void showSon()
    {
        cout << "This is Son class." << endl;
    }
};

int main()
{
    Son obj;

    obj.showFather();
    obj.showSon();

    return 0;
}

