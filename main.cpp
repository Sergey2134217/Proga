#define _USE_MATH_DEFINES // for C++

#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

/**
 * \brief среднее арифметическое кубов этих чисел.
 * \param value1 число вводимое пользователем.
 * \param value2 число вводимое пользователем.
 * \return среднее арифметическое кубов этих чисел.
 */
double average(const double value1,const double value2);


/**
 * \brief среднее геометрическое модулей этих чисел.
 * \param value1 число вводимое пользователем.
 * \param value2 число вводимое пользователем.
 * \return среднее геометрическое модулей этих чисел.
 */
double mean_geometric(const double value1,const double value2);

/**
 * \brief Пользовательский выбор среднее арифметическое кубов этих чисел (0),
 * или среднее геометрическое модулей этих чисел (1)
 */
enum class ActionChoice { first = 1, second = 2 };

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
    cout << "Введите 2 числа ";
    double value1,value2;
    cin >> value1 >> value2;

    cout << "1.среднее арифметическое кубов этих чисел\n2.среднее геометрическое модулей этих чисел\n";
    int input;
    cin >> input;

    const auto choice = static_cast<ActionChoice>(input);

    switch (choice)
    {
        case ActionChoice::first:
        {
            double rezult = average(value1,value2);
            cout<<rezult;
            break;
        }
        case ActionChoice::second:
        {
            double rezult = mean_geometric(value1,value2);
            cout<<rezult;
            break;
        }
    }
    return 0;
}

double average(const double value1,const double value2){
	return ( value1 + value2 ) / 2;
}

double mean_geometric(const double value1,const double value2){
	return ( sqrt( fabs( value1 ) * sqrt( fabs( value2 ) ) ) );
}
