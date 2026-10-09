#include "Square.h"
using Figures::Square;
Square::Square(float s) : Shape(), side{ s } {}

Square::Square() : Shape(), side{ 0 } {}

float Square::GetArea()
{
    if (area == 0)
        area = side * side;
    return area;
}

float Square::GetPerimeter()
{
    if (perimeter == 0)
        perimeter = side * 4.0f;
    return perimeter;
}

std::string Square::GetInfo()
{

    return "Квадрат со стороной " + std::to_string(side) +
        "\nПлощадь = " + std::to_string(area) +
        "\nПериметр = " + std::to_string(perimeter) + "\n";
}
