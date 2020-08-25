//#pragma once
#ifndef PRINT_H
#define PRINT_H

#include <string>

#include "Add.h"

void Print(std::string str);

void Print(int a, int b)
{
    using namespace std;

    cout << Add(a, b) << endl;
}

#endif