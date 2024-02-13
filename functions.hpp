#pragma once
#include <iostream>
#include <cstdint>
#include <string>



enum class UsedOperators
{
    Addition = 1,
    Substraction = 2,
    Multiplication = 3,
    Division = 4
};

float operation(float ValueA, float ValueB, auto Operator);
float InputUserValue();
int InputUserOperator();
void Calculator();
