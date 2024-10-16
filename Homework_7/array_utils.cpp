#include "array_utils.hpp"
#include <iostream>

namespace arr
{
	void read(int* const arr, int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = std::rand();
			std::cout << arr[i] << "\t";
		}
	}

	void zamena(int* const arr, int size)
	{
		int copy = 0;

		for(int i = 0, j = (size - 1); i < (size / 2); i++, j--)
		{
			copy = arr[i];
			arr[i] = arr[j];
			arr[j] = copy;
		}
	}

	void show(const int* const arr, int size)
	{
		std::cout << std::endl;
		for(int i = (size - 1); i >= 0; i--)
		{
			std::cout << arr[i] << "\t";
		}
	}

	int* add(int* arr_copy, int* size, int vall)
	{
		(*size)++;

		int* arr = new int[*size];

		for (int i = 0; i <= (*size - 2); i++)
		{
			arr[i] = arr_copy[i];
		}

		arr[(*size - 1)] = vall;

		delete[] arr_copy;

		return arr;
	}

	int* remBegin(int* arr_copy, int& size)
	{
		size--;

		int* arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = arr_copy[i+1];
		}

		delete[] arr_copy;

		return arr;
	}

	int* remEnd(int* arr_copy, int& size)
	{
		size--;

		int* arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			arr[i] = arr_copy[i];
		}

		delete[] arr_copy;

		return arr;
	}

	int* rem(int* arr_copy, int& size, int position)
	{
		if (position >= size)
		{
			return arr_copy;
		}

		size--;

		int* arr = new int[size];
		
		for (int i = 0; i < size; i++)
		{
			if (i < position) {
				arr[i] = arr_copy[i];
			}
			else {
				arr[i] = arr_copy[i + 1];
			}
		}

		delete[] arr_copy;

		return arr;
	}

	int* intersection(const int* const arr_1, int& size_1, const int* const arr_2, int& size_2,int& size)
	{
		int* arr = NULL;

		for (int i = 0; i < size_1; i++)
		{
			for (int j = 0; j < size_2; j++)
			{
				if (arr_1[i] == arr_2[j])
				{
					
					if(size == 0) {
						size++;
					    arr = new int[size];
						arr[0] = arr_2[j];
					}	
					else {
						arr = add(arr, &size, arr_2[j]);
					}
						
				}
			}
		}

		return arr;
	}

	int* notDating(const int* const arr_1, int& size_1, const int* const arr_2, int& size_2, int& size)
	{
		int* arr = NULL;

		for (int i = 0; i < size_1; i++)
		{
			int flag = 0;
			for (int j = 0; j < size_2; j++)
			{
				if (arr_1[i] == arr_2[j])
				{
					flag = 1;
					break;
				}
			}

			if (!flag)
			{
				arr = add(arr, &size, arr_1[i]);
			}
			
		}

		return arr;
	}
}