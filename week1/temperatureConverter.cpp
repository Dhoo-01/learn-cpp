//#include "temperature_converter.h"
#include <iostream>
#include <cstdio>
#include <iomanip>
#include <cctype>
using namespace std;

void convertFromCelsius(double value)
{
    cout << "Fahrenheit: " << (value * 9 / 5) + 32 << endl;
    cout << "Kelvin: " << value + 273.15 << endl;
}

void convertFromKelvin(double value)
{
    cout << "Celsius: " << value - 273.15 << endl;
    cout << "Fahrenheit: " << (value - 273.15) * 9 / 5 + 32 << endl;
}

void convertFromFahrenheit(double value)
{
    cout << "Celsius: " << (value - 32) * 5 / 9 << endl;
    cout << "Kelvin: " << (value - 32) * 5 / 9 + 273.15 << endl;
}

void celsiusLoopConvertResult()
{
    cout << setw(6) << "|" << " Fahrenheit | Kelvin" << setw(4) << "|" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        cout << setw(3) << i << "C | ";
        cout << setw(10) << (i * 9.0 / 5.0 + 32) << " | ";
        cout << setw(8) << (i + 273.15) << " |" << endl;
    }
}

void kelvinLoopConvertResult()
{
    cout << setw(7) << "| " << "Celsius " << setw(5) << "| " << "Fahrenheit |" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        cout << setw(3) << i << "K | ";
        cout << setw(10) << (i - 273.15) << " | ";
        cout << setw(10) << ((i - 273.15) * 9.0 / 5.0 + 32) << " |" << endl;
    }
}

void fahrenheitLoopConvertResult()
{
    cout << setw(7) << "| " << "Celsius " << setw(5) << "| " << "Kelvin " << setw(3) << "|" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        cout << setw(3) << i << "F | ";
        cout << setw(10) << ((i - 32) * 5.0 / 9.0) << " | ";
        cout << setw(8) << ((i - 32) * 5.0 / 9.0 + 273.15) << " |" << endl;
    }
}

int main()
{
    double value;
    char isRepeat = 'y';
    char temperatureOption;
    while (isRepeat == 'y')
    {
        cout << fixed << setprecision(2);
        cout << "Put temperature you want to check/convert! (C/K/F) " << endl;
        cin >> temperatureOption;

        cout << "Put value you want to check/convert! " << endl;
        cin >> value;

        if (temperatureOption == 'c')
        {
            convertFromCelsius(value);
            celsiusLoopConvertResult();
        }
        else if (temperatureOption == 'k')
        {
            convertFromKelvin(value);
            kelvinLoopConvertResult();
        }
        else if (temperatureOption == 'f')
        {
            convertFromFahrenheit(value);
            fahrenheitLoopConvertResult();
        }
        else
        {
            cout << "Follow the instruction! " << endl;
        }

        printf("do you still want to use temperature converter?");
        cin >> isRepeat;
    }
    return 0;
}
