#include <iostream>
#include <cstdint>
#include <string>

float operation(float ValueA, float ValueB, auto Operator);
float InputUserValue();
int InputUserOperator();

enum class UsedOperators
{
    Addition = 1,
    Substraction = 2,
    Multiplication = 3,
    Division = 4
};
