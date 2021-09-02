#include <iostream>
#include <math.h>

class PowClass
{
public:
	float R = 2.6, S = 3.15;

	void setR(float r)
	{
		R = r;
	};
	void setS(float s)
	{
		S = s;
	};

	float calculate()
	{
		return pow(R, S);
	};

};
int main()
{
	PowClass a;
	a.setR(3.14);
	a.setS(5.4);
	a.calculate();

	std::cout << "Res: " << a.calculate();
	return 0;

};