#include "sortingAlgorithms.h"


void bubblesort(int arr[], int SIZE)
{
	while (SIZE != 0)
	{
		for (int j = 1; j < SIZE; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				int time = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = time;
			}
		}
		SIZE--;
	}

}


void selectionSort(int arr[], int size)
{
	int min_index = 0;
	for (size_t i = 0; i < size-1; i++)
	{
		min_index = i;
		for (size_t j = i; j < size; j++)
		{
			if (arr[min_index] > arr[j])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;

		}
	}
}



void insertionSort(int arr[], int size)
{

		for (size_t i = 1; i < size; i++)
		{
			int max_index = i - 1;
			while (arr[max_index] > arr[max_index + 1] )
			{
				int temp = arr[max_index + 1];
				arr[max_index + 1] = arr[max_index];
				arr[max_index] = temp;
				max_index--;
			}
		}

}


int __hoaraSort(int arr[], int left, int right)
{
	int pivot = arr[(left + right) / 2];
	while (left <= right)
	{
		while (arr[left] < pivot) { ++left; }
		while (arr[right] > pivot) { --right; }

		if (left <= right)
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}

	}
	return left;
}

void quickSortHoara(int arr[], int start, int end)
{
	if (start >= end) { return; }
	int rStart = __hoaraSort(arr, start, end);
	quickSortHoara(arr, start, rStart-1);
	quickSortHoara(arr, rStart, end);
}

void HoaraFastSort(int arr[], int size)
{
	quickSortHoara(arr, 0, size - 1);
}




int __lamut(int arr[], int start, int end)
{
	int left = start;
	for (size_t i = start; i < end; i++)
	{
		if (arr[i] <= arr[end])
		{
			int temp = arr[left];
			arr[left] = arr[i];
			arr[i] = temp;
			left++;
		}
	}
	int temp = arr[left];
	arr[left] = arr[end];
	arr[end] = temp;
	return left;
}


void _lamutFastSort(int arr[], int start, int end)
{
	if (start >= end) { return; }
	int lStart = __lamut(arr, start, end);
	_lamutFastSort(arr, start, lStart - 1);
	_lamutFastSort(arr, lStart+1, end);
}


void LamutFastSort(int arr[], int size)
{
	_lamutFastSort(arr, 0, size-1);
}