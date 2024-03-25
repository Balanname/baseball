#include <iostream>

int digitnum(int a, int b) {

	while (b > 1) {
		a /= 10;
		b--;
	}

	return a % 10;

}

int strikenumber(int answer, int guess) {

	int strike = 0;

	if (digitnum(answer, 1) == digitnum(guess, 1)) strike++;
	if (digitnum(answer, 2) == digitnum(guess, 2)) strike++;
	if (digitnum(answer, 3) == digitnum(guess, 3)) strike++;

	 
	return strike;
}

int ballsnumber(int answer, int guess) {
	int ball = 0;

	if (digitnum(answer, 1) == digitnum(guess, 2) || digitnum(answer, 1) == digitnum(guess, 3)) ball++;
	if (digitnum(answer, 2) == digitnum(guess, 1) || digitnum(answer, 2) == digitnum(guess, 3)) ball++;
	if (digitnum(answer, 3) == digitnum(guess, 1) || digitnum(answer, 3) == digitnum(guess, 2)) ball++;

	return ball;
}