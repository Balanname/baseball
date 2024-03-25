#include <iostream>
#include <cstdlib>	//rand // srand
#include <ctime> //time


using namespace std;

int answerSet() {

	
	srand((unsigned)time(NULL));

	int a = rand() % 1000;

	if (a / 100 == (a / 10) % 10 || a / 100 == a % 10 || (a / 10) % 10 == a % 10) {

		int a = rand() % 1000;
	}
	else
		return a;
	




}