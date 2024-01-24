#include <iostream>
#include <cstdint>
#include <string>

float InputUserValue()
{
    std::cout << " Eingabe einer Zahl:" << "\n";
    float entry;
    std::cin >> entry;
    return entry;
}
int InputUserOperator()
{
    std:: cout << "Please enter the operator (Addition [1], Substraction[2], Multiplication[3], Division[4])" << "\n";
    int entry;
    std::cin >> entry;
    return entry;
}
enum class UsedOperators
{
    Addition = 1,
    Substraction = 2,
    Multiplication = 3,
    Division = 4
};

float operation(float ValueA, float ValueB, auto Operator)
{
    switch (Operator)
    {
    case UsedOperators::Addition:
        {
            float operatedValue = ValueA + ValueB;
            return operatedValue;
        }
        break;
     case UsedOperators::Substraction:
        {
            float operatedValue = ValueA - ValueB;
            return operatedValue;
        }
        break;
     case UsedOperators::Multiplication:
        {
            float operatedValue = ValueA * ValueB;
            return operatedValue;
        }
        break;
      case UsedOperators::Division:
        {
            float operatedValue = ValueA / ValueB;
            return operatedValue;
        }
        break;
    default:
        {
            std::cout << "No valid operand!";
        }
        break;
    }
}
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
