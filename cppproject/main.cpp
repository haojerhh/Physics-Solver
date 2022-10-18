//Hi
#include <iostream>
#include <vector>
#include <cmath>
#include "motion.h.h"
#include "motion.cpp"
#include "waves.h"
#include "waves.cpp"
#include "input.h"
using namespace std;
typedef long double ld;

void MotionInput();
void WavesInput();

int main ()
{
    int topic;
    cout << "Topic :" << endl << "1 ~ Motion\n2 ~ Waves" << "\n\n" << "Enter the topic you want : ";
    cin >> topic;
    cout << endl;

    if (topic == 1)
        MotionInput();

    else if (topic == 2)
        WavesInput();

    return 0;
}
