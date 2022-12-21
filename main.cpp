#include <iostream>
#include "calculator.h"


//Tego sie nie powinno używac wgl wiec najlepiej jakbys to wydupcyl
using namespace std;

int main()
{
    Calculator calc;
    do
    {
        calc.hello();
        calc.setVar1();
        calc.setVar2();
        //Zrobiłbym setOperation jako pierwsze, bo moze ktos chciec wyjsc z programu odrazu
        calc.setOperation();
        calc.calculate();
        cout << "Result: " << calc.getResult() << endl;
        cout << "Hex: " << calc.toHex() << endl;
        cout << "Bin: " << calc.toBin() << endl;
        cout << "Oct: " << calc.toOct() << endl;

        //getchar();getchar();
        //Te getchary zmieniłbym na 
        system("PAUSE");
        system("cls");
    }while(calc.flag);
    return 0;
}