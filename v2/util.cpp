#include <iostream>
#include <cstdlib>	//rand // srand
#include <ctime> //time


int answerSet() {

	srand((unsigned int)time(NULL));


	int a;

	a = rand() % 1000;

	return a;


}