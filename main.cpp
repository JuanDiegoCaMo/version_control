#include <iostream>

using namespace std;

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
