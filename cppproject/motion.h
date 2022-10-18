#ifndef MOTION_H_INCLUDED
#define MOTION_H_INCLUDED
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
typedef long double ld;

namespace Motion
{
    class Motion
    {
        protected:
        vector<ld>val;
        ld num;

        public:
        Motion() = default;
        ~Motion() = default;

        virtual void print(int x) = 0;
        virtual void findV() = 0;
        virtual void findU() = 0;
        virtual void findA() = 0;
        virtual void findT() = 0;
        virtual void findS() = 0;
    };

    class FirstEquation : public Motion
    {
        public:
        FirstEquation() = default;
        ~FirstEquation() = default;

        void print(int x);
        void findV();
        void findU();
        void findA();
        void findT();
        void findS();

    };

    class SecondEquation : public Motion
    {
        public:
        SecondEquation() = default;
        ~SecondEquation() = default;

        void print(int x);
        void findS();
        void findU();
        void findT();
        void findA();
        void findV();
    };
}
#endif // MOTION_H_INCLUDED
