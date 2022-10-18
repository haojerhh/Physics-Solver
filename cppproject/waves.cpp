#include <iostream>
#include <cmath>
#include <vector>
#include "waves.h"
using namespace std;
typedef long double ld;

void Waves::FirstEquation::print(int x)
{
    if (x == 1)
        findV();

    else if (x == 2)
        findLambda();

    else if (x == 3)
        findF();
}

void Waves::FirstEquation::findV()
{
    cout << "Enter : λ and f : ";
    for (int i = 0; i < 2; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << "v = (" << this->val[0] << ")(" << this->val[1] << ')' << endl;
    cout << "v = " << this->val[0]*this->val[1]; //v = λ*f
}

void Waves::FirstEquation::findLambda()
{
    cout << "Enter : v and f : ";
    for (int i = 0; i < 2; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << this->val[0] << " = λ(" << this->val[1] << ')' << endl;
    cout << this->val[0] << " / " << this->val[1] << " = λ" << endl;
    cout << "λ = " << this->val[0]/this->val[1]; //λ = v/f
}

void Waves::FirstEquation::findF()
{
    cout << "Enter : v and λ : ";
    for (int i = 0; i < 2; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << this->val[0] << " = " << this->val[1] << 'f' << endl;
    cout << this->val[0] << " / " << this->val[1] << " = f" << endl;
    cout << "f = " << this->val[0]/this->val[1]; //f = v/λ
}
