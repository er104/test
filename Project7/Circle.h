#pragma once
#include "Shape.h"
namespace Figures {
	class Circle : public Shape
	{
	protected:
		float radius;
	public:
		Circle(float);
		Circle();

		float GetArea() override;
		float GetPerimeter()  override;
		std::string GetInfo()  override;

	};

}