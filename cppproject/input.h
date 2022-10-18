#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long double ld;

void MotionInput()
{
    int x = 0;
    int y = 0;
    cout << "Equation Supported : " << endl << "1 ~ v = u + at\n2 ~ s = ut + 1/2at² " << "\n\n" << "Enter the one : ";
    cin >> x;
    cout << endl;

    if (x == 1)
    {
        cout << "What do you want to find?" << endl << "1 ~ V\n2 ~ U\n3 ~ A\n4 ~ T" << "\n\n" << "Enter the one : ";
        cin >> y;
        cout << endl;
        Motion::Motion* a = new Motion::FirstEquation;
        a->print(y);
        delete a;
    }

    else if (x == 2)
    {
        cout << "What do you want to find?" << endl << "1 ~ S\n2 ~ U\n3 ~ T\n4 ~ A" << "\n\n" << "Enter the one : ";
        cin >> y;
        cout << endl;
        Motion::Motion* a = new Motion::SecondEquation;
        a->print(y);
        delete a;
     }

    else
    {
        cout << "Not Valid";
    }

}

void WavesInput()
{
    int x = 0;
    int y = 0;
    cout << "Equation Supported : " << endl << "1 ~ v = λf" << "\n\n" << "Enter the one : ";
    cin >> x;
    cout << endl;

    if (x == 1)
    {
        cout << "What do you want to find?" << endl << "1 ~ V\n2 ~ f\n3 ~ λ" << "\n\n" << "Enter the one : ";
        cin >> y;
        cout << endl;
        Waves::Waves* a = new Waves::FirstEquation;
        a->print(y);
        delete a;
    }

    else
    {
        cout << "Not Valid";
    }

}
#endif // INPUT_H_INCLUDED
