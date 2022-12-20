#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    Calculator calc;

    calc.setVar1(10.5);
    calc.setVar2(5.2);
    calc.setOperation('+');

    calc.calculate();
    cout << "Result: " << calc.getResult() << endl;

    cout << "Hex: " << calc.toHex() << endl;
    cout << "Bin: " << calc.toBin() << endl;
    cout << "Oct: " << calc.toOct() << endl;

    getchar();getchar();
    return 0;
}