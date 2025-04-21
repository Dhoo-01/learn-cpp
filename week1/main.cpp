#include <iostream>
#include <cstdio>

using namespace std;

void printResult(int result)
{
    cout << "result is " << result << endl;
}

void getResult(int a, int b, char op)
{
    if (op == '+')
    {
        //int addResult = add(a, b);
        int addResult = a + b;
        printResult(addResult);
    }
    else if (op == '-')
    {
        int minResult = a - b;
        printResult(minResult);
    }
    else if (op == '*')
    {
        int multiplyResult = a * b;
        printResult(multiplyResult);
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            cout << "error, cannot accept 0 number! " << endl;
        }
        else
        {
            int divideResult = a / b;
            printResult(divideResult);
        }
    }
    else
    {
        cout << "please follow the instruction";
    }
}

int main()
{
    int varA;
    int varB;

    char operation;

    char isRepeat = 'y';

    cout << "hello world!" << endl;

    while (isRepeat == 'y')
    {
        cout << "put first number! ";
        cin >> varA;

        cout << "put second number! ";
        cin >> varB;

        cout << "choose what operation do you want(+,-,/,*) " << endl;
        cin >> operation;

        getResult(varA, varB, operation);

        printf("do you still want to use calculator? ");
        cin >> isRepeat;
    }
    return 0;
}
