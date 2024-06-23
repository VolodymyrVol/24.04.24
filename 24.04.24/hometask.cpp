#include <iostream>
using namespace std;

bool check(int arr[], const int SIZE, int v)
{
	if (SIZE == 0)
	{
		return false;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == v)
		{
			return true;
		}
	}

	return false;
}

int main()
{
	srand(time(0));
//1. Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы обоих массивов.
	//int size1, size2;
	//cin >> size1 >> size2;
	//int* arr1 = 0;
	//int* arr2 = 0;
	//arr1 = new int[size1];
	//arr2 = new int[size2];
	//
	//for (int i = 0; i < size1; i++)
	//{
	//	arr1[i] = rand() % 20;
	//	cout << arr1[i] << "\t";
	//}
	//cout << endl;
	//cout << "----------------------------------------\n";
	//for (int i = 0; i < size2; i++)
	//{
	//	arr2[i] = rand() % 20;
	//	cout << arr2[i] << "\t";
	//}
	//cout << endl;
	//int size3 = size1 + size2;
	//int* arr3 = new int[size3];
	//for (int i = 0,j=0; i < size3; i++)
	//{
	//	arr3[i] = arr1[j];
	//	j++;
	//}
	//for (int i = size1, j = 0; i < size3; i++)
	//{
	//	arr3[i] = arr2[j];
	//	j++;
	//}
	//cout << "----------------------------------------\n";
	//for (int i = 0; i < size3; i++)
	//{
	//	cout << arr3[i] << "\t";
	//}
	//cout << endl;
	/*delete[] arr1;
	delete[] arr2;
	delete[] arr3;*/
	//2. Даны два массива : А[M] и B[N](M и  N вводятся с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать общие элементы двух массивов.
	/*int size1, size2;
	cin >> size1 >> size2;
	int* arr1 = 0;
	int* arr2 = 0;
	arr1 = new int[size1];
	arr2 = new int[size2];
	
	for (int i = 0; i < size1; i++)
	{
		arr1[i] = rand() % 20;
		cout << arr1[i] << "\t";
	}
	cout << endl;
	cout << "----------------------------------------\n";
	for (int i = 0; i < size2; i++)
	{
		arr2[i] = rand() % 20;
		cout << arr2[i] << "\t";
	}
	cout << endl;
	int size3=0;	
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] == arr2[j] )
			{
				size3++;
				break;
			}
		}
	}
	int* arr3 = new int[size3];
	int count = 0;

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] == arr2[j] && !check(arr3, size3, arr1[i]))
			{
				arr3[count] = arr1[i];
				count++;
			}
		}
	}
	cout << "----------------------------------------\n";
	for (int i = 0; i < size3; i++)
	{
		cout << arr3[i] << "\t";
	}
	cout << endl;*/
	/*delete[] arr1;
	delete[] arr2;
	delete[] arr3;*/

}