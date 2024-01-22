#include <iostream>
#include <cstdint>

float inputValues()
{
    float ValueA = 0;
    float ValueB = 0;
    std::cout << "Bitte gib den ersten Wert ein:" << "\n";
    std::cin >> ValueA;
    std::cout << "Bitte gib den zweiten Wert ein:" << "\n";
    std::cin >> ValueB;

    return ValueA,ValueB;
}

void operation()
{
    inputValues()
}

int main()
{
    std::cout << "Hallo Welt!" << std::endl;

    return 0;
}
