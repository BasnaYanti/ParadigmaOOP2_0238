#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan()
    {
        cout << "Hallo aku fungsi dari base class";
    }
};

class derivedClass : public baseClass
{
    public:
    void perkenalan()
    {
        cout << "Hallo aku fungsi dari derived Class";
    }
};


int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}