#include <iostream>
#include <cmath>
using namespace std;
/**
* \brief вычисление переменной A по заданной формуле
* \param сonst double x - константа данная по условию
* \param сonst double y - константа данная по условию
* \param сonst double z - константа данная по условию
* \return - значение a
*/
double getA(const double x, const double y, const double z);

/**
* \brief вычисление переменной B по заданной формуле
* \param сonst double x - константа данная по условию
* \param сonst double y - константа данная по условию
* \param сonst double z - константа данная по условию
* \return - значение b
*/
double getB(const double x, const double y, const double z);

/**
* \brief Точка входа в программу
* \return Код ошибки(0 - успех)
*/
int main()
{
	const auto x = -4.8;
	const auto y = 17.5;
	const auto z = 3.2;

	const auto a = getA(x, y, z);
	const auto b = getB(x, y, z);

	cout << "x = " << x << ", y = " << y << ", z = " << z << " a = " << a << ", b = " << b << endl;
	return 0;

}

double getA(const double x, const double y, const double z)
{
	return ( y * z * pow(z , 2) - ( z / pow(sin(x / z) , 2) ) );
}

double getB(const double x, const double y, const double z)
{

	return z * exp( -sqrt(z) ) * cos( (y * x) / z );
}
