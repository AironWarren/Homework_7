#include "iostream"
#include "money_utils.hpp"

const double convert_ruble_in_lil = 3.14;

namespace rubles
{
	
	void read(double* const money)
	{
		setlocale(LC_ALL, "ru");

		std::cout << "������� ����������� ����� � ������: ";
		std::cin >> *money;
		while (*money < 0)
		{
			std::cout << "\n�� ����� ������������ ��������, ��������� �������: ";
			std::cin >> *money;
		}
	}
}

namespace lil
{
	double* convert(const double* const money)
	{
		double* lil = new double;

		*lil = *money * convert_ruble_in_lil;
		
		delete money;

		return lil;
	}

	void show(const double* const money)
	{
		setlocale(LC_ALL, "ru");

		std::cout << "� ����������� ������ ��������� �������� = " << *money;
	}
}