// bmstu_lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double a1, a2, a3, b1, b2, b3, c1, c2, c3, det, vol;
    printf_s("a="); scanf_s("%lf%lf%lf", &a1, &a2, &a3);
    printf_s("b="); scanf_s("%lf%lf%lf", &b1, &b2, &b3);
    printf_s("c="); scanf_s("%lf%lf%lf", &c1, &c2, &c3);
    det = a1 * b2 * c3 + b1 * c2 * a3 + b3 * a2 * c1 - c1 * b2 * a3 - a2 * b1 * c3 - a1 * b3 * c2;
    vol = fabs(det / 6);
    std::cout << "volume = " << vol;


}