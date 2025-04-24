#include "temperature_converter.h"
#include <iostream>
#include <cstdio>
using namespace std;

void convertFromCelsius(double value)
{
    cout << "Fahrenheit: " << (value * 9 / 5) + 32 << endl;
    cout << "Kelvin: " << value + 273.15 << endl;
    // cout << "| Fahrenheit | " << "Kelvin |" << endl;
    //   cout << "| " << (value * 9 / 5) + 32 << "         | " << value + 273.15 << " |" << endl;
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
    cout << "    | Fahrenheit | "
         << "Kelvin |" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        //  printf("perulangan ke-%i\n", i);
        cout << i << "C ";
        cout << "| " << (i * 9 / 5) + 32 << "         | " << i + 273.15 << " |" << endl;
    }
}

void kelvinLoopConvertResult()
{
    cout << "    | Celsius | "
         << "Fahrenheit |" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        cout << i << "K ";
        cout << "| " << i - 273.15 << " | " << (i - 273.15) * 9 / 5 + 32 << " |" << endl;
    }
}

void fahrenheitLoopConvertResult()
{
    cout << "    | Celsius | "
         << "Kelvin |" << endl;
    for (int i = 0; i <= 100; i += 10)
    {
        cout << i << "F ";
        cout << "| " << (i - 32) * 5 / 9 << " | " << (i - 32) * 5 / 9 + 273.15 << endl;
    }
}

int main()
{
    double value;
    char isRepeat = 'y';
    char temperatureOption;
    while (isRepeat == 'y')
    {
        cout << "Put temperature you want to check/convert! (C/K/F) " << endl;
        cin >> temperatureOption;

        cout << "Put value you want to check/convert! " << endl;
        cin >> value;

        if (temperatureOption == 'C')
        {
            convertFromCelsius(value);
            celsiusLoopConvertResult();
        }
        else if (temperatureOption == 'K')
        {
            convertFromKelvin(value);
            kelvinLoopConvertResult();
        }
        else if (temperatureOption == 'F')
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
