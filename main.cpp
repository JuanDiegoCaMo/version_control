#include <iostream>

using namespace std;

class Puertos
{
private:
    unsigned int pinLed;
public:
    Puertos(int _p1){
        pinLed = _p1;
    }
};

void impresion();

int main()
{
    impresion();
    cout << "Hello World!" << endl;
    return 0;
}

void impresion() {
    for (int var = 0; var < 10; ++var){
        cout << var << endl;
    }
}
