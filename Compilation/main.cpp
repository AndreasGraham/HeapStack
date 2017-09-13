#include <iostream>
#include "globals.h"
#include "incdec.h"

void releaseHalfLove() {
	static int a = 0;
	a++;
	std::cout << "THE GAME: " << a << std::endl;
	if (a >= 2) {
		a = 0;
	}
}

void stepFizzBuzz() {
	static int b = 0;
	b++;
	if (b % 3 == 0 && b % 5 == 0) {
		std::cout << "FizzBuzz" << std::endl;
	}
	else if (b % 3 == 0) {
		std::cout << "Fizz" << std::endl;
	}
	else if (b % 5 == 0) {
		std::cout << "Buzz" << std::endl;
	}
	else {
		std::cout << b << std::endl;
	}
}


void CallMeMaybe() {
	static int betch = 0;
	if (betch == 0) {
		std::cout << "YOu a fat betch" << std::endl;
	}
	else if (betch == 1) {
		std::cout << "You a skinny betch" << std::endl;
	}
	betch++;
	if (betch >= 2) {
		betch = 0;
	}
}

float divide(float lhs, float rhs) {
	_ASSERTE(rhs != 0);
	return lhs / rhs;
}

int main()
{
	/*releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	*/
	for (int i = 0; i < 30; i++) {
		stepFizzBuzz();
	}

	/*increment();
	decrement();
	increment();*/

	//divide(1, 1);
	//divide(1, 0); // does not work yay!
	CallMeMaybe();
	CallMeMaybe();
	while (true) {};
}