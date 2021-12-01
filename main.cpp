#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


/**
 * \brief Возможность расчета функции в точке.
 * \param x Входной параметр - точка x.
 * \return true, если функция определена в заданной точке x.
 */
bool IsCalculated(const double x);

/**
 * \brief Расчет функции в точке x.
 * \param x Входной параметр - точка x.
 * \return Значение функции в точке x
 */
double Calculation(const double x);

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
    const auto leftBound = -1.0;
    const auto rightBound = 0.85;
    const auto step = 0.05;

		auto x = leftBound;

    for (x; x <= rightBound; x += step)
    {
        if (IsCalculated(x))
        {
            const auto y = Calculation(x);
            cout << x  <<" "<< y << '\n'<<'\n';
        }
        cout  << x << " not defined \n"<<'\n';
    }
    return 0;
}

double Calculation(const double x)
{
    return ( x - ( 1 / ( 3 + sin(3.6 * x) ) ) );
}

bool IsCalculated(const double x)
{
    return x >= numeric_limits<double>::min();
}
