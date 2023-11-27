#include <iostream>

#include "sortingAlgorithms.h"



int main()
{
	{
		int arr[]{ 3,2,5,6,9,1,3,2,7,8,10,11,13 };
		int size = sizeof(arr) / sizeof(int);
 		bubblesort(arr, size);

		std::cout<<"bubble sort "<<std::endl;
		for (int a : arr)
		{
			std::cout << a << "\t";
		}
		std::cout << std::endl;
	}
	{
		int arr[]{ 3,2,5,6,9,1,3,2,7,8,10,11,13 };
		int size = sizeof(arr) / sizeof(int);
		selectionSort(arr,size);

		std::cout<<"selection sort "<<std::endl;
		for (int a : arr)
		{
			std::cout << a << "\t";
		}
		std::cout << std::endl;
	}
	{
		int arr[]{ 3,2,5,6,9,1,3,2,7,8,10,11,13 };
		int size = sizeof(arr) / sizeof(int);
		insertionSort(arr, size);

		std::cout<<"insertion sort "<<std::endl;
		for (int a : arr)
		{
			std::cout << a << "\t";
		}
		std::cout << std::endl;
	}

	{
		int arr[]{ 3,2,5,6,9,1,3,2,7,8,10,11,13 };
		int size = sizeof(arr) / sizeof(int);
		HoaraFastSort(arr, size);

		std::cout<<"Hoara fast sort "<<std::endl;
		for (int a : arr)
		{
			std::cout << a << "\t";
		}
		std::cout << std::endl;
	}

	{
		int arr[]{ 3,2,5,6,9,1,3,2,7,8,10,11,13 };
		int size = sizeof(arr) / sizeof(int);
		LamutFastSort(arr, size);

		std::cout<<"Lamut Fast sort "<<std::endl;
		for (int a : arr)
		{
			std::cout << a << "\t";
		}
		std::cout << std::endl;
	}

	return 0;
}
