#ifndef WAVES_H_INCLUDED
#define WAVES_H_INCLUDED
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long double ld;

namespace Waves
{
    class Waves
    {
        protected:
        vector<ld>val;
        ld num;

        public:
        Waves() = default;
        ~Waves() = default;

        virtual void print(int x) = 0;
        virtual void findV() = 0;
        virtual void findLambda() = 0;
        virtual void findF() = 0;
    };

    class FirstEquation : public Waves
    {
        public:
        FirstEquation() = default;
        ~FirstEquation() = default;

        void print(int x);
        void findV();
        void findLambda();
        void findF();
    };
}

#endif // WAVES_H_INCLUDED
