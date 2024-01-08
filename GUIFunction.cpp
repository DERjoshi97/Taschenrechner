#include <iostream>
#include <cstdint>

/*
bool showNumbersAndOperators()
{
    constexpr static auto numRows = std::uint32_t{4};
    constexpr static auto numColumns = std::uint32_t{3};

    std::int32_t GUI [numRows][numColumns]=
    {
        {1 ,2 ,3 },
        {4 ,5 ,6 },
        {7 ,8 ,9 },
        {0 ,0 ,0 }
    };

    for (size_t i = 0; i < numRows; ++i)
    {
        for (size_t j = 0; j < numColumns; ++j)
        {
            std::cout << GUI[i][j] << " ";
        }
        std::cout << "\n";
    }

}
*/

void GUI()
{
    constexpr static auto numRows = std::uint32_t{4};
    constexpr static auto numColumns = std::uint32_t{3};
    constexpr static auto numValuesFields = std::uint32_t{12};
    std::uint32_t cursorPositionRows = 0U;
    std::uint32_t cursorPositionColumns = 0U;
    std::uint32_t cursorValue = 0U;


    std::int32_t GUI [numRows][numColumns]=
    {
        {1 ,2 ,3 },
        {4 ,5 ,6 },
        {7 ,8 ,9 },
        {0 ,0 ,0 }
    };
    for (size_t i = 0; i < numRows; ++i)
    {
        for (size_t j = 0; j < numColumns; ++j)
        {
            if (i == cursorPositionRows && j == cursorPositionColumns)
            {
                cursorValue = GUI[i][j];
                std::cout << "|"<< " ";
            }
            else
            {
                std::cout << GUI[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout <<"The value of the cursor is " << cursorValue << "\n";
}
int main()
{
    GUI();
    return 0;
}