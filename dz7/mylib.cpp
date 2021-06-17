#include "mylib.h"

#define ARRAYSIZE 7


/* ������� 1 � 5
* �������� ������ �� 2� cpp ������ � ������������� (main.cpp, mylib.cpp, mylib.h) �� ������ ������ mylib �������� 3 �������: ��� ������������� ������� (���� float),
* ������ ��� �� ����� � �������� ���������� ������������� � ������������� ���������. ��������� ��� 3-� ������� �� main ��� ������ � ��������.
*/
namespace task1
{
	void ArrayInitialization(float* array, const size_t sizeArray)
	{
		srand(time(0));
		for (size_t i = 0; i < sizeArray; i++)
		{
			array[i] = (rand() % 1000 - 500) / 1.5f;
		}
	}

	void PrintArray(float* array, size_t arreySize)
	{
		for (size_t i = 0; i < arreySize; i++)
		{
			std::cout << array[i] << " ";
		}
		std::cout << "\n";
	}

	void CountingValues(float* array, size_t arreySize)
	{
		int negative = 0;
		int positive = 0;
		for (size_t i = 0; i < arreySize; i++)
		{
			if (array[i] > 0)
				positive++;
			else
				negative++;
		}
		std::cout << "� ������� " << positive << " ������������ �����" << std::endl;
		std::cout << "� ������� " << negative << " ������������� �����" << std::endl;
	}
}

/*
* ������� ������ ���� int. ����� ��� ������ �������� ����� ��������� ������������� #define. ��������������� ��� ����� ���� � ����������. �������� ��� ���� ���� �������
* ���������� (�������� ���������). ���������� ������������ ��������� ��� ������������ SwapINT(a, b). ��������� �� �� ����� ����������.
*/

namespace task3
{
	void InputDataInArray()
	{
		std::cout << "������� " << ARRAYSIZE << " ����������� �����: ";
		int* arrayNaturalNumbers = new int[ARRAYSIZE];
		int value;
		for (size_t i = 0; i < ARRAYSIZE; i++)
		{
			std::cin >> value;
			arrayNaturalNumbers[i] = value;
		}
		PrintArray(arrayNaturalNumbers);
		SortArray(arrayNaturalNumbers);
		PrintArray(arrayNaturalNumbers);
		delete[]arrayNaturalNumbers;
	}

	void SSSSS(int &a, int &b)
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	#define ssss(a,b)SSSSS(a,b)

	void SortArray(int* array)
	{
		
		for (size_t i = 0; i < ARRAYSIZE - 1; i++)
		{
			for (size_t i = 0; i < ARRAYSIZE - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					ssss(array[i], array[i + 1]);
				}
			}
		}
	}
#undef ssss

	void PrintArray(int* array)
	{
		for (size_t i = 0; i < ARRAYSIZE; i++)
		{
			std::cout << array[i] << " ";
		}
		std::cout << "\n";
	}
}