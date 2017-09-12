#include <iostream>

void printFloats(float * arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << *(arr+i) << std::endl;
	}
}


void arraySum(float * arr, int size) {
	int bargaga = 0;
	for (int i = 0; i < size; i++) {
		bargaga += *(arr + i);
	}
	std::cout << bargaga << std::endl;
}

void arrayAvg(float * arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(arr + i);
	}
	std::cout << sum / size << std::endl;
}
void findCount(int target, int * arr, int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == target) {
			counter++;
		}
	}
	std::cout << counter << std::endl;
}

void arrCopy(int * srcArr, int srcSize, int * dstArr, int dstSize) {
	int copy = 0;
	for (int i = 0; i < srcSize; i++) {
		 *(dstArr + i) = *(srcArr + i);
		// std::cout << *(dstArr) << std::endl;
	}
}

void arrReversal(int * arr, int size) {
	

	int *dumby = new int[size];
	arrCopy(arr, size, dumby, size);

	for (int i = 0; i < size; i++) {
		
		*(arr + i) = *(dumby + (size-i - 1));
		std::cout << *(arr + i) << std::endl;
	}
}

void cstrReversal(char * arr, int size) {

}

int main() {

	//pointer arithmatic and type casting
	int a = 1;
	int b = 2;

	int * hArr = new int[2];

	hArr[0] = 1;
	hArr[1] = 2;

	/*std::cout << hArr[0] << std::endl;
	std::cout << hArr[1] << std::endl;

	std::cout << hArr[0] << std::endl;
	std::cout << *(hArr+1) << std::endl;*/ //shifts memory address over one space of address to create a new pointer

	int * arrLarge = new int[100];
	int arrLargeStack[100];

	//iterator w/ substricpt operatior
	for (int i = 0; i < 100; i++) {
		arrLarge[i] = i;
		arrLargeStack[i] = i;
	}

	//iteraotr w/ pointer arithmatic
	/*for (int i = 0; i < 100; i++) {
		std::cout << *(arrLargeStack + i) << std::endl;
	}*/

	//basically pointer array and stack array worked the same, arrays are pointers pretty much

	delete[] hArr;
	delete[] arrLarge;

	float dollars = 1.8f;

	/*std::cout << dollars << std::endl;
	std::cout << (int)dollars << std::endl;*/ // type casting, geting one data type to funciton as another
	// really useful if you need to convert types
	float * bArr = new float[5];

	for (int i = 0; i < 5; i++) {
		bArr[i] = i;
	}

	//printFloats(bArr, 5);
	//arraySum(bArr, 5);
	//arrayAvg(bArr, 5);

	delete[] bArr;
	int * cat = new int[3];
	cat[0] = 1;
	cat[1] = 2;
	cat[2] = 3;

	int * bat = new int[3];

	//findCount(2, cat, 3);
	//arrCopy(cat, 3, bat, 3);
	arrReversal(cat, 3);


	delete[] cat;
	delete[] bat;
	system("pause");



}