#include <iostream>
#include "money_utils.hpp"
#include "array_utils.hpp"


int main()
{
	// ������ 7.1
	double* value = new double;
	rubles::read(value);
	value = lil::convert(value);
	lil::show(value);

	delete value;

	// ������ 7.2
	int size;
	int* sum = new int;
	std::cout << "\n������� ������ �������: ";
	std::cin >> size;

	int* mass = new int[size];

	*sum = 0;
	for(int i = 0; i < size; i++)
	{
		mass[i] = std::rand();

		if (!(mass[i] % 6))
			*sum += mass[i];
	}

	std::cout << "����� = " << *sum << std::endl;

	delete sum;
	delete[] mass;

	// ������ 7.3
	int Size;
	std::cout << "������� ������ �������: ";
	std::cin >> Size;

	int* arr = new int[Size];
	
	arr::read(arr, Size);
	arr::zamena(arr, Size);
	arr::show(arr, Size);

	delete[] arr;

	// ������ 7.4
	int sIze;
	std::cout << "\n�������  ������ �������: ";
	std::cin >> sIze;
	int* arr_2 = new int[sIze];

	arr::read(arr_2, sIze);
	std::cout << "\n������� ����� ������� ��������� � ����� �������: ";
	int val;
	std::cin >> val;

	arr_2 = arr::add(arr_2, &sIze, val);

	arr::show(arr_2, sIze);

	delete[] arr_2;

	return 1;
}