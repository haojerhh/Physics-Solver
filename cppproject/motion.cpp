#include <iostream>
#include <cmath>
#include <vector>
#include "motion.h.h"
using namespace std;
typedef long double ld;

void Motion::FirstEquation::print(int x)
{
    if (x == 1)
        findV();

    else if (x == 2)
        findU();

    else if (x == 3)
        findA();

    else if (x == 4)
        findT();

    else
        findS();
}

void Motion::FirstEquation::findV()
{
    cout << "Enter u, a and t : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << "v = " << this->val[0] << " + " << '(' << this->val[1] << ')' << '(' << this->val[2] << ')' << endl;
    cout << "v = " << this->val[0] + (this->val[1]*this->val[2]); // u + (a*t)
}

void Motion::FirstEquation::findU()
{
    cout << "Enter v, a and t : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << this->val[0] << " = " << "u + " << '(' << this->val[1] << ')' << '(' << this->val[2] << ')' << endl;
    cout << this->val[0] << " - u = " << '(' << this->val[1] << ')' << '(' << this->val[2] << ')' << endl;
    cout << "-u = " << '(' << this->val[1] << ')' << '(' << this->val[2] << ')' << " - " << this->val[0] << endl;
    cout << "u = " << '-' << '(' << this->val[1] << ')' << '(' << this->val[2] << ')' << " + " << this->val[0] << endl;
    cout << "u = " << -(this->val[1]*this->val[2]) + this->val[0]; //-(a*t) + v
}

void Motion::FirstEquation::findA()
{
    cout << "Enter v, u, t : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << this->val[0] << " = " << this->val[1] << " + a" << '(' << this->val[2] << ')' << endl;
    cout << this->val[0] << " / " << this->val[2] << " = "<< this->val[1] << " + a" << endl;
    cout << '(' << this->val[0] << " / " << this->val[2] << ')' << " - " << this->val[1] << " = " << 'a' << endl;
    cout << "a = " << (this->val[0]/this->val[2]) - this->val[1]; //(v/t) - u
}

void Motion::FirstEquation::findT()
{
    cout << "Enter v, u, a : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << this->val[0] << " = " << this->val[1] << " + " << '(' << this->val[2]  << ")t" << endl;
    cout << this->val[0] << " / " << this->val[2] << " = " << this->val[1] << " + " << 't' << endl;
    cout << '(' << this->val[0] << " / " << this->val[2] << ')' << " - " << this->val[1] << " = " << 't' << endl;
    cout << "t = " << (this->val[0]/this->val[2]) - this->val[1]; //(v/a) - u
}

void Motion::FirstEquation::findS()
{
    cout << "Not Valid";
}

void Motion::SecondEquation::print(int x)
{
    if (x == 1)
        findS();

    else if (x == 2)
        findU();

    else if (x == 3)
        findT();

    else if (x == 4)
        findA();

    else
        findV();

}

void Motion::SecondEquation::findS()
{
    cout << "Enter u, t and a : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n" << "s = " << '(' << this->val[0] << ")(" << this->val[1] << ')' << " + " << "((" << this->val[2] << ")(" << this->val[1] << ")² / 2)" << endl;
    cout << "s = " << (this->val[0]*this->val[1]) + ((this->val[2]*pow(this->val[1], 2)) / 2); //(u*t) + ((a*pow(t, 2)) / 2)
}

void Motion::SecondEquation::findU()
{
    cout << "Enter s, t, a : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "too lazy rn";
}

void Motion::SecondEquation::findT()
{
    cout << "Enter s, u (must be 0), a : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    if (this->val[1] == 0)
    {
        cout << "t = soon lol lazy rn";
    }

    else
    {
        cout << "u is not 0"; //t = sroot2s/a
    }
}

void Motion::SecondEquation::findA()
{
    cout << "Enter s, u, t : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> this->num;
        this->val.push_back(this->num);
    }
    cout << "Step :\n";
    cout << "a = " << (2*this->val[0]) - (2*this->val[1]*this->val[2]) / pow(this->val[2], 2); //((2*s) - (2*u*t)) / pow(t, 2);
}

void Motion::SecondEquation::findV()
{
    cout << "Not Valid";
}
