#pragma once
#include "globals.h"
#include <iostream>

int counter = 0; 

void increment() {
	counter++;
	std::cout << counter << std::endl;
}

void decrement() {
	counter--;
	std::cout << counter << std::endl;
}