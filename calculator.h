#include <iostream>
#include <string>


using namespace std;

class Calculator
{
    private:

        double p_var1;
        double p_var2;
        char p_operation;
        string p_oper_result;

    public:

        Calculator() : p_var1(0), p_var2(0), p_operation('*'), p_oper_result("0") {}

        double setVar1(double var);
        double setVar2(double var);
        void setOperation(char operation);
        void calculate();
        string getResult();
        string toHex();
        string toBin();
        string toOct();
};