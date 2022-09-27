#include <iostream>

class Figure
{
public:
	Figure()
	{
		_sideCount = 0;
		_name = "Фигура";
	}

	unsigned int getSideCount()
	{
		return _sideCount;
	}

	std::string& getName()
	{
		return _name;
	} 
protected:
	Figure(unsigned int sideCount)
	{
		_sideCount = sideCount;
	}

	std::string _name;
private:
	unsigned int _sideCount;
};

class Triangle : public Figure
{
public:
	Triangle() : Figure(3)
	{
		_name = "Треугольник";
	}
};

class Quadrangle : public Figure
{
public:
	Quadrangle() : Figure(4)
	{
		_name = "Четырехугольник";
	}
};

namespace FigureUtils
{
	void printSummary(Figure& f)
	{
		std::cout << f.getName() << ": " << f.getSideCount() << std::endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	Figure f;
	Triangle t;
	Quadrangle q;
	std::cout << "Название фигуры: " << "Количество сторон" << std::endl;
	FigureUtils::printSummary(f);
	FigureUtils::printSummary(t);
	FigureUtils::printSummary(q);
}

