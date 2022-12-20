#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    while(true)
    {
        Calculator calc;

        calc.hello();
        calc.setVar1();
        calc.setVar2();
        calc.setOperation();

        calc.calculate();
        cout << "Result: " << calc.getResult() << endl;

        cout << "Hex: " << calc.toHex() << endl;
        cout << "Bin: " << calc.toBin() << endl;
        cout << "Oct: " << calc.toOct() << endl;

        getchar();getchar();
        system("cls");
    }
    return 0;
}