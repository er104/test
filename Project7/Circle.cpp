#include "Circle.h"
using Figures::Circle;
Circle::Circle(float r) : Shape(), radius{ r } {}

Circle::Circle() : Shape(), radius{ 0 } {}

float Circle::GetArea()
{
    if (area == 0)
        area = M_PI * radius * radius;
    return area;
}

float Circle::GetPerimeter()
{
    if (perimeter == 0)
        perimeter = 2.0f * M_PI * radius;
    return perimeter;
}

std::string Circle::GetInfo()
{
    return "Окружность с радиусом " + std::to_string(radius) +
        "\nПлощадь = " + std::to_string(area) +
        "\nПериметр = " + std::to_string(perimeter) + "\n";
}