#include <iostream>
#include <cstdint>
#include <string>

#include "functions.hpp"

int main()
{
    float ValueA = InputUserValue();
    float ValueB = InputUserValue();
    int Operator = InputUserOperator();
    auto transformedOperator = static_cast <UsedOperators>(Operator);
    float Ergebnis = operation(ValueA, ValueB, transformedOperator);

    std::cout << Ergebnis << "\n";
    return 0;
}
