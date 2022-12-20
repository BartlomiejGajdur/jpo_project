#include <iostream>
#include "calculator.h"
#include <iomanip>
#include <bitset>
#include <sstream>
#include <cmath>
#include <cstdlib>



using namespace std;

double Calculator::setVar1(double var)
{
    p_var1 = var;
    return p_var1;
}

double Calculator::setVar2(double var)
{
    p_var2 = var;
    return p_var2;
}

void Calculator::setOperation(char operation)
{
    p_oper_result = operation;
}

void Calculator::calculate()
{
    stringstream resultStream;
    resultStream << fixed << setprecision(2);

    switch (p_operation)
    {
        case '+':
            resultStream << p_var1 + p_var2;
            break;
        case '-':
            resultStream << p_var1 - p_var2;
            break;
        case '*':
            resultStream << p_var1 * p_var2;
            break;
        case '/':
            resultStream << p_var1 / p_var2;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }
    
    p_oper_result = resultStream.str();
}

string Calculator::getResult()
{
    return p_oper_result;
}

string Calculator::toHex()
{
    stringstream resultStream;
    long long int resultInt;

    resultStream << p_oper_result;
    resultStream >> resultInt;
    resultStream.clear();

    resultStream << "\t\t\t0x" << hex << resultInt;

    return resultStream.str();
}

string Calculator::toBin()
{
    stringstream resultStream;
    long long int resultInt;

    resultStream << p_oper_result;
    resultStream >> resultInt;
    resultStream.clear();

    resultStream << "\t\t\t0b" << bitset<64>(resultInt);

    return resultStream.str();
}

string Calculator::toOct()
{
    stringstream resultStream;
    long long int resultInt;

    resultStream << p_oper_result;
    resultStream >> resultInt;
    resultStream.clear();

    resultStream << "\t\t\t0" << oct << resultInt;

    return resultStream.str();
}