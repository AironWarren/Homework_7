#include <iostream>
#include "money_utils.hpp"
#include "array_utils.hpp"


int main()
{
	// Задача 7.1
	double* value = new double;
	rubles::read(value);
	value = lil::convert(value);
	lil::show(value);

	delete value;

	// Задача 7.2
	int size;
	int* sum = new int;
	std::cout << "\nВведите размер массива: ";
	std::cin >> size;

	int* mass = new int[size];

	*sum = 0;
	for(int i = 0; i < size; i++)
	{
		mass[i] = std::rand();

		if (!(mass[i] % 6))
			*sum += mass[i];
	}

	std::cout << "Сумма = " << *sum << std::endl;

	delete sum;
	delete[] mass;

	// Задача 7.3
	int Size;
	std::cout << "Введите размер массива: ";
	std::cin >> Size;

	int* arr = new int[Size];
	
	arr::read(arr, Size);
	arr::zamena(arr, Size);
	arr::show(arr, Size);

	delete[] arr;

	// Задача 7.4
	int sIze;
	std::cout << "\nВведите  размер массива: ";
	std::cin >> sIze;
	int* arr_2 = new int[sIze];

	arr::read(arr_2, sIze);
	std::cout << "\nВведите число которое добавится в конец массива: ";
	int val;
	std::cin >> val;

	arr_2 = arr::add(arr_2, &sIze, val);

	arr::show(arr_2, sIze);

	delete[] arr_2;

	//персечение массивов
	int* arr_inters = NULL;
	int arr_inters_size = 0;

	int size_test_arr_1 = 3;
	int* test_arr_1 = new int[size_test_arr_1]{ 1, 8, 9 };
	
	int size_test_arr_2 = 5;
	int* test_arr_2 = new int[size_test_arr_2]{ 5, 1, 45, 1, 9 };

	arr_inters = arr::intersection(test_arr_1, size_test_arr_1, test_arr_2, size_test_arr_2, arr_inters_size);

	arr::show(arr_inters, arr_inters_size);

	delete[] arr_inters;
	arr_inters_size = 0;

	arr_inters = arr::notDating(test_arr_1, size_test_arr_1, test_arr_2, size_test_arr_2, arr_inters_size);

	arr::show(arr_inters, arr_inters_size);

	delete[] arr_inters;

	return 1;
}