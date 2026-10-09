#pragma once
#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<string>

namespace Figures {
	class Shape
	{
	protected:
		float area;
		float perimeter;
	public:
		Shape();
		virtual float GetArea() = 0;
		virtual float GetPerimeter() = 0;
		virtual std::string GetInfo() = 0;

	};
}
