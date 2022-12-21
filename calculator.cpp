#include <iostream>
#include "calculator.h"
#include <iomanip>
#include <bitset>
#include <sstream>
#include <cmath>
#include <cstdlib>

using namespace std;

void Calculator::hello()
{
    cout << endl <<  "Witam w kalkulatorze dla elektronikow. " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Co moge dla ciebie zrobic?" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Opcje:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Wyjdz" << endl;
    cout << endl;
}

void Calculator::setVar1()
{
    // Niepotrzebne deklaracje zmiennych 
    cout << "Podaj pierwsza wartosc: ";
    cin >> p_var1;
    //Tutaj przykladowa obsluga tego cina, ale ewentualnie mozesz probowac zrobic z do whilem
    //Dopoki Cin.fail jest true to wpisuj liczbe.
    if(cin.fail())
    {
        cout<<"Nie wpisales chyba liczby kolezko";
        flag = false;
    }
    cout<<endl;
}

void Calculator::setVar2()
{
    cout << "Podaj druga wartosc: ";
    cin >> p_var2;
    cout << endl;
    
}

void Calculator::setOperation()
{
    /*
    ja raczej jak masz proste menu to robie zamiast char w swichu to size_t/ int operation łatwiej chyba to walidowac
    */ 
    char operation;
    cout << "Wybierz operacje (podaj numer operacji): ";
    cin >> operation;
    p_operation = operation;
}

void Calculator::calculate()
{
    // to fajnie w summie zrobione 
    stringstream resultStream;
    resultStream << fixed << setprecision(2);

    switch (p_operation)
    {
        case '1':
            resultStream << p_var1 + p_var2;
            break;
        case '2':
            resultStream << p_var1 - p_var2;
            break;
        case '3':
            resultStream << p_var1 * p_var2;
            break;
        case '4':
            if (p_var2 == 0)
                cout << "Nie mozna dzielic przez 0!" << endl;
            else
                resultStream << p_var1 / p_var2;
            break;
        case '5':
            cout << "Dowidzenia!";
            exit(0);
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

//Na wypisuwanie nie patrzyłem ale jak do niczego nie korzystasz to tez chyba bym proste voidy zrobił bo zwracasz niepotrzebnie jakas zienna
//Czyli np w mainie zamiast cout<<"Result" <<......<..... to zrobił funkcji void Calculator::PrintToHex i tylko ją wywołwywał
// i ogolnie  wtych funkcji nie sprawdzalem bo nie bawilem sie za duzo w hexach oct itpp.... i tam sa raczej tylko sprawy wizualne
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