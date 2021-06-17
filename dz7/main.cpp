// dz7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "mylib.h"

/*задание 2
Описать макрокоманду(через директиву define), проверяющую, входит ли переданное ей число(введенное с клавиатуры) в диапазон от нуля(включительно) до переданного ей 
второго аргумента(исключительно) и возвращает true или false, вывести на экран «true» или «false».
*/
#define RANGE(a,b)(a>=0 && a<b?true:false)

int main()
{

	//данные задания 1 и 5
	setlocale(0, "rus");
	const size_t sizeArray = 8;
	float* myArray = new float[sizeArray];
	task1::ArrayInitialization(myArray, sizeArray);
	task1::PrintArray(myArray, sizeArray);
	task1::CountingValues(myArray, sizeArray);

	
	std::cout <<std::boolalpha<< RANGE(3,4) << std::endl;
#undef RANGE

	task3::InputDataInArray();




	// PrintArray(arr,7);


}

