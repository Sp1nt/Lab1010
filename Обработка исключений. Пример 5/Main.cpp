#include <iostream>

#include "Exception.h"
#include "IndexException.h"
#include "DivideByZero.h"

using namespace std;

int main()
{
    double numerator = 0.0;
    double denominator = 0.0;

    try
    {
        cout << "Enter a numerator: ";
        cin >> numerator;

        cout << "Enter a denominator: ";
        cin >> denominator;

        if (denominator == 0.0)
        {
            throw DivideByZero("Divide by zero");
        }

            cout << "Result = " << numerator / denominator << endl;

            int mas[3]{ 1,2,3 };
            for (int i = 0; i < 5; i++)
            {
                if (i >= 3)
                {
                    throw IndexException("No index");

                }
                cout << mas[i] << "\t";
            }
            cout << endl;
    }
    catch (Exception exception)
    {
        cout << exception.GetMessage() << endl;
    }

    return 0;
}